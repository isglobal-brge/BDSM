#include "include/hdf5_blocktCrossprod.h"



// Working directly with C-matrix in hdf5 file
// If option paral·lel is enabled, this function loads hdf5 read blocks
// of medium size into memory and calculates the multiplication of blocks
// by applying the parallel algorithm Bblock_matrix_mul_parallel (in-memory process)
// browmajor : if = true, indicates that R data is stored in hdf5 as row major (default in hdf5)
//             else, indicates that R data is stored in hdf5 as column major
int hdf5_block_matrix_tcrossprod_hdf5( std::string matA, IntegerVector sizeA, 
                                       std::string matB, IntegerVector sizeB, 
                                       int hdf5_block,
                                       std::string filename, std::string strsubgroupIN, std::string strsubgroupOUT, 
                                       int mem_block_size, bool bparal, bool browmajor, 
                                       Rcpp::Nullable<int> threads  = R_NilValue)
{
  
  
  int N = sizeA[1];
  int K = sizeA[0];
  
  
  int M = sizeB[1];
  int L = sizeB[0];
  
  IntegerVector stride = {1,1};
  IntegerVector block = {1,1};
  
  if( K == L)
  {
    int isize = hdf5_block + 1;
    int ksize = hdf5_block + 1;
    int jsize = hdf5_block + 1;
    
    IntegerVector stride = IntegerVector::create(1, 1);
    IntegerVector block = IntegerVector::create(1, 1); 

    // Create an empty dataset for C-matrix into hdf5 file
    //.Works OK.// create_HDF5_dataset( filename, strsubgroupOUT + "tCrossProd_" + matA + "x" + matB, N, M, "real");
    create_HDF5_dataset( filename, strsubgroupOUT + "tCrossProd_" + matA + "x" + matB, M, N, "real");

    // Open file and get dataset
    H5File* file = new H5File( filename, H5F_ACC_RDWR );
    
    DataSet* datasetA = new DataSet(file->openDataSet(strsubgroupIN + matA));
    DataSet* datasetB = new DataSet(file->openDataSet(strsubgroupIN + matB));
    DataSet* datasetC = new DataSet(file->openDataSet(strsubgroupOUT + "tCrossProd_" + matA + "x" + matB));
    
    for (int ii = 0; ii < N; ii += hdf5_block)
    {
      
      if( ii + hdf5_block > N ) isize = N - ii;
      for (int jj = 0; jj < M; jj += hdf5_block)
      {
        
        if( jj + hdf5_block > M) jsize = M - jj;
        for(int kk = 0; kk < K; kk += hdf5_block)
        {
          if( kk + hdf5_block > K ) ksize = K - kk;
          
          // Get blocks from hdf5 file
          Eigen::MatrixXd A = GetCurrentBlock_hdf5_Original( file, datasetA, kk, ii, 
                                                    std::min(hdf5_block,ksize),std::min(hdf5_block,isize));
          
          Eigen::MatrixXd B = GetCurrentBlock_hdf5( file, datasetB, kk, jj, 
                                                    std::min(hdf5_block,ksize),std::min(hdf5_block,jsize));

          //.Works OK.// Eigen::MatrixXd C = GetCurrentBlock_hdf5( file, datasetC, ii, jj, 
          //.Works OK.//                                           std::min(hdf5_block,isize),std::min(hdf5_block,jsize));
          
          Eigen::MatrixXd C = GetCurrentBlock_hdf5( file, datasetC, jj, ii, 
                                                    std::min(hdf5_block,jsize),std::min(hdf5_block,isize));
          C.transposeInPlace();

          if( bparal == false)
            C = C + A*B;
          else
            C = C + Bblock_matrix_mul_parallel(A, B, mem_block_size, threads);

          //.Works OK.// IntegerVector count = {std::min(hdf5_block,isize), std::min(hdf5_block,jsize)};
          //.Works OK.// IntegerVector offset = {ii,jj};
          
          IntegerVector count = {std::min(hdf5_block,jsize), std::min(hdf5_block,isize)};
          IntegerVector offset = {jj,ii};
          
          write_HDF5_matrix_subset_v2( file, datasetC, offset, count, stride, block, Rcpp::wrap(C.transpose()));
          
          if( kk + hdf5_block > K ) ksize = hdf5_block + 1;
        }
        
        if( jj + hdf5_block > M ) jsize = hdf5_block + 1;
      }
      
      if( ii + hdf5_block > N ) isize = hdf5_block + 1;
    }
    
    datasetA->close();
    datasetB->close();
    datasetC->close();
    file->close();
    
    return(0);
  }else {
    throw std::range_error("non-conformable arguments");
  }
}







//' Transposed Crossprod with hdf5 matrix
//' 
//' This function performs the transposed crossprod from a matrix inside and hdf5 data file
//' 
//' @param filename string file name where dataset to normalize is stored
//' @param group string or Delayed Array Matrix
//' @param dataset string name inside HDF5 file
//' @param block_size (optional, defalut = 128) block size to make matrix multiplication, if `block_size = 1` no block size is applied (size 1 = 1 element per block)
//' @param paral, (optional, default = TRUE) if paral = TRUE performs parallel computation else performs seria computation
//' @param threads (optional) only if bparal = true, number of concurrent threads in parallelization if threads is null then threads =  maximum number of threads available
//' @param outgroup (optional) group name to store results from Crossprod inside hdf5 data file
//' @examples
//' 
//' matA <- matA <- matrix(c(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15), nrow = 3, byrow = TRUE)
//' matB <- matrix(c(15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,5,3,4,5,2,6,2,3,4, 42, 23, 23, 423,1,2), ncol = 5, byrow = TRUE)
//' 
//' Create_HDF5_matrix_file("BasicMatVect.hdf5", matA, "INPUT", "matA")
//' Create_HDF5_matrix( matB, "BasicMatVect.hdf5", "INPUT", "matB")
//' 
//' res <- BDSM::tCrossprod_hdf5("BasicMatVect.hdf5", "INPUT","matA", block_size = 2)
//' res2 <- BDSM::tCrossprod_hdf5("BasicMatVect.hdf5", "INPUT", "matA", "INPUT","matB", block_size = 2)
//' 
//' # Open file
//' h5fdelay = H5Fopen("BasicMatVect.hdf5")
//' 
//' res <- h5fdelay$OUTPUT$tCrossProd_matAxmatA
//' res2 <- h5fdelay$OUTPUT$tCrossProd_matAxmatB
//' 
//' all.equal(tcrossprod(matA), res)
//' all.equal(tcrossprod(matA, matB), res2)
//' 
//' # Close delayed.hdf5 file
//' H5Fclose(h5fdelay)
//' 
//' @export
// [[Rcpp::export]]
Rcpp::RObject tCrossprod_hdf5(std::string filename, const std::string group, 
                             std::string A,
                             Rcpp::Nullable<std::string> groupB = R_NilValue, 
                             Rcpp::Nullable<std::string>  B = R_NilValue, 
                             Rcpp::Nullable<int> block_size = R_NilValue, 
                             Rcpp::Nullable<bool> paral = R_NilValue,
                             Rcpp::Nullable<int> threads = R_NilValue,
                             Rcpp::Nullable<double> mixblock_size = R_NilValue,
                             Rcpp::Nullable<std::string> outgroup = R_NilValue)
{


  int iblock_size, res;
  bool bparal, bexistgroup;// = Rcpp::as<double>;
  Eigen::MatrixXd C;
  std::string matB;
  
  
  H5File* file;
  
  std::string strsubgroupOut;

  IntegerVector dsizeA;
  
  // hdf5 parameters
  try{
    
    H5::Exception::dontPrint();  
    
    if( outgroup.isNull()) {
      strsubgroupOut = "OUTPUT/";
    } else {
      strsubgroupOut = Rcpp::as<std::string> (outgroup) + "/";
    }
    
    //..// std::string strsubgroup = "Base.matrices/";
    std::string strsubgroupIn = group + "/";

    // Open file and get dataset
    file = new H5File( filename, H5F_ACC_RDONLY );
    
    DataSet dsA = file->openDataSet(strsubgroupIn + A);
    IntegerVector dsizeA = get_HDF5_dataset_size(dsA);
    bexistgroup = exists_HDF5_element_ptr(file,strsubgroupOut );
    
    dsA.close();
    file->close();
    
    DataSet dsB;
    IntegerVector dsizeB;
    
    
    if( groupB.isNull()) {
      dsizeB = dsizeA;
      matB =  A;
    } else {
      
      std::string strgroup = as<std::string>(groupB) + "/";
      matB = as<std::string>(B);
      
      // Open file and get dataset
      file = new H5File( filename, H5F_ACC_RDONLY );
      
      DataSet dsB = file->openDataSet(strgroup + matB);
      dsizeB = get_HDF5_dataset_size(dsB);
      
      dsB.close();
      file->close();
    }
    
    Rcpp::Rcout<<"\n\n Hem tancata \n\n";
      
    if(block_size.isNotNull())
    {
      iblock_size = Rcpp::as<int> (block_size);
    } else {
      iblock_size =  std::min(std::min(dsizeA[0], dsizeA[1]), std::min(dsizeB[0], dsizeB[1]));
      if (iblock_size>1024) {
        iblock_size = 1024;
      }
    }
    
    Rcpp::Rcout<<"\n\n Hem tancata 2 \n\n";
    
    if( paral.isNull()) {
      bparal = false;
    } else {
      bparal = Rcpp::as<bool> (paral);
    }
    
    Rcpp::Rcout<<"\n\n Hem tancata 3 \n\n";
    
    if(!bexistgroup) {
      res = create_HDF5_group(filename, strsubgroupOut );
    }

    if(bparal == true)
    {
      //.. TODO : Work with parallel hdf5 access
      //..// C = hdf5_block_matrix_mul_parallel( dsizeA, dsizeB, iblock_size, filename, strsubgroup, threads );
      
      Rcpp::Rcout<<"\n\n Hem tancata 4 \n\n";
      
      int memory_block; // Block size to apply to read hdf5 data to paralelize calculus
      
      if(mixblock_size.isNotNull())
        memory_block = Rcpp::as<int> (mixblock_size);
      else 
        memory_block = 128;
      
      Rcpp::Rcout<<"\n\nCrida tcrossprod\n\n";
      // Test mix versión read block from file and calculate multiplication in memory (with paral·lel algorithm)
      hdf5_block_matrix_tcrossprod_hdf5(A, dsizeA, matB, dsizeB, iblock_size, filename, strsubgroupIn, strsubgroupOut, 
                                             memory_block, bparal,true, threads);
      
    }else if (bparal == false)
    {
      
      Rcpp::Rcout<<"\n\n Hem tancata 5 \n\n";
      
      // Not parallel
      hdf5_block_matrix_tcrossprod_hdf5(A, dsizeA, matB, dsizeB, iblock_size, filename, strsubgroupIn, strsubgroupOut, 
                                       0, bparal,true, threads);
      
    }

  } catch( FileIException error ) { // catch failure caused by the H5File operations
    file->close();
    ::Rf_error( "c++ exception (File IException)" );
    return wrap(-1);
  } catch( DataSetIException error ) { // catch failure caused by the DataSet operations
    file->close();
    ::Rf_error( "c++ exception (DataSet IException)" );
    return wrap(-1);
  } catch(std::exception &ex) {
    Rcpp::Rcout<< ex.what();
    return wrap(-1);
  }
  
  
  //..// return wrap(wrap(C));
  
  //..// return(C);
  return List::create(Named("filename") = filename,
                      Named("dataset") = strsubgroupOut + "/" +  "tCrossProd_" + A,
                      Named("result") = wrap(0));
  
}


/***R
library(BigDataStatMeth)
setwd("~/Library/Mobile Documents/com~apple~CloudDocs/PROJECTES/Treballant/BigDataStatMeth")
devtools::document()



library(DelayedArray)
library(rhdf5)

setwd( "/Users/mailos/BitDataStatMeth_test/BasicMatVect" )

n <- 7
m <- 5
p <- 5
q <- 12

# R Object

set.seed(222)
matA <- matrix(runif(n*m), nrow = n, ncol = m)
matA <- matA <- matrix(c(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15), nrow = 3, byrow = TRUE)
matB <- matrix(c(15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,5,3,4,5,2,6,2,3,4, 42, 23, 23, 423,1,2), ncol = 5, byrow = TRUE)

dim(matA)
dim(matB)
# dim(t(matB))

Create_HDF5_matrix_file("BasicMatVect.hdf5", matA, "INPUT", "matA")
Create_HDF5_matrix( matB, "BasicMatVect.hdf5", "INPUT", "matB")

res <- BDSM::tCrossprod_hdf5("BasicMatVect.hdf5", "INPUT","matA", block_size = 2)
res2 <- BDSM::tCrossprod_hdf5("BasicMatVect.hdf5", "INPUT", "matA", "INPUT","matB", block_size = 2)



# Examine hierarchy before open file
h5ls("BasicMatVect.hdf5")

# Open file
h5fdelay = H5Fopen("BasicMatVect.hdf5")
# Show hdf5 hierarchy (groups)
h5fdelay

res <- h5fdelay$OUTPUT$tCrossProd_matAxmatA
res2 <- h5fdelay$OUTPUT$tCrossProd_matAxmatB

all.equal(tcrossprod(matA), res)
all.equal(tcrossprod(matA, matB), res2)

# Close delayed.hdf5 file
H5Fclose(h5fdelay)


matAxmatB


*/