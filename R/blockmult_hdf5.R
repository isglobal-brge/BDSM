#' Block matrix multiplication with hdf5 datasets
#' 
#' This function performs a block matrix-matrix multiplication with mattrix stored in HDF5 file
#' 
#' @export
#' @param filename string file name where dataset to normalize is stored
#' @param group string with the group name where matrix is stored inside HDF5 file
#' @param a a double matrix.
#' @param b a double matrix.
#' @param block_size (optional, defalut = 128) block size to make matrix multiplication, if `block_size = 1` no block size is applied (size 1 = 1 element per block)
#' @param paral, (optional, default = FALSE) paral = true --> TO BE IMPLEMENTED 
#' @param threads (optional) only if bparal = true, number of concurrent threads in parallelization if threads is null then threads =  maximum number of threads available
#' @param mixblock_size (optiona, default = 128), only if we are working with big matrix and parallel computation = true. 
#' Block size for mixed computation in big matrix parallel. Size of the block to be used to perform parallelized memory 
#' memory of the block read from the disk being processed.
#' @param outgroup (optional) string with group name where we want to store the result matrix
#' @return A list with an HDF5 object with numerical matrix and  HDF5 file name with results
#' \itemize{
#'  #### \item{"res"}{rhdf5 object with result matrix - link to hdf5 file contents . IMPORTANT !!, we have to close the object after fihish to work}
#'  \item{"file"}{string with hdf5 file name with result and original matrixs}
#'  \item{"dataset"}{string complete path inside hdf5 file where results are stored.}
#' }
#' @examples
#' # with numeric matrix
#' 
#' library(DelayedArray)
#' 
#' m <- 500
#' k <- 1500
#' n <- 400
#' A <- matrix(rnorm(n*k), nrow=n, ncol=k)
#' B <- matrix(rnorm(n*k), nrow=k, ncol=n)
#' 
#' blockmult(A, B, 128, TRUE)
#' 
#' # with Delaeyd Array
#' AD <- DelayedArray(A)
#' BD <- DelayedArray(B)
#' 
#' blockmult_hdf5( AD, BD, 128, TRUE)
#' 
blockmult_hdf5 <- function( filename, group, a, b, block_size = 128, paral = FALSE, threads = NULL,  mixblock_size = 128, 
                       outgroup = "OUTPUT")
{ 

  res <- .Call('_BDSM_blockmult_hdf5', PACKAGE = 'BDSM', filename, group, a, b, block_size, paral, threads, mixblock_size, outgroup)

  if (res$result == 0)
    #..# return( list("res" = rhdf5::H5Fopen(res$filename), "file" = res$filename, "dataset" = res$dataset) )
    return( list( "file" = res$filename, "dataset" = res$dataset) )
  else
    warning("Error performing matrix multiplication")

}
