// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// bdRemovelowdata
Rcpp::RObject bdRemovelowdata(std::string filename, std::string group, std::string dataset, std::string outgroup, std::string outdataset, Rcpp::Nullable<double> pcent, Rcpp::Nullable<bool> SNPincols);
RcppExport SEXP _BDSM_bdRemovelowdata(SEXP filenameSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP outgroupSEXP, SEXP outdatasetSEXP, SEXP pcentSEXP, SEXP SNPincolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< std::string >::type outgroup(outgroupSEXP);
    Rcpp::traits::input_parameter< std::string >::type outdataset(outdatasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type pcent(pcentSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type SNPincols(SNPincolsSEXP);
    rcpp_result_gen = Rcpp::wrap(bdRemovelowdata(filename, group, dataset, outgroup, outdataset, pcent, SNPincols));
    return rcpp_result_gen;
END_RCPP
}
// Crossprod_hdf5
Rcpp::RObject Crossprod_hdf5(std::string filename, const std::string group, std::string A, Rcpp::Nullable<std::string> groupB, Rcpp::Nullable<std::string> B, Rcpp::Nullable<int> block_size, Rcpp::Nullable<bool> paral, Rcpp::Nullable<int> threads, Rcpp::Nullable<double> mixblock_size, Rcpp::Nullable<std::string> outgroup);
RcppExport SEXP _BDSM_Crossprod_hdf5(SEXP filenameSEXP, SEXP groupSEXP, SEXP ASEXP, SEXP groupBSEXP, SEXP BSEXP, SEXP block_sizeSEXP, SEXP paralSEXP, SEXP threadsSEXP, SEXP mixblock_sizeSEXP, SEXP outgroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type groupB(groupBSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type paral(paralSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type mixblock_size(mixblock_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outgroup(outgroupSEXP);
    rcpp_result_gen = Rcpp::wrap(Crossprod_hdf5(filename, group, A, groupB, B, block_size, paral, threads, mixblock_size, outgroup));
    return rcpp_result_gen;
END_RCPP
}
// blockmult_hdf5
Rcpp::RObject blockmult_hdf5(std::string filename, const std::string group, std::string A, std::string B, Rcpp::Nullable<int> block_size, Rcpp::Nullable<bool> paral, Rcpp::Nullable<int> threads, Rcpp::Nullable<double> mixblock_size, Rcpp::Nullable<std::string> outgroup);
RcppExport SEXP _BDSM_blockmult_hdf5(SEXP filenameSEXP, SEXP groupSEXP, SEXP ASEXP, SEXP BSEXP, SEXP block_sizeSEXP, SEXP paralSEXP, SEXP threadsSEXP, SEXP mixblock_sizeSEXP, SEXP outgroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type A(ASEXP);
    Rcpp::traits::input_parameter< std::string >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type paral(paralSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type mixblock_size(mixblock_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outgroup(outgroupSEXP);
    rcpp_result_gen = Rcpp::wrap(blockmult_hdf5(filename, group, A, B, block_size, paral, threads, mixblock_size, outgroup));
    return rcpp_result_gen;
END_RCPP
}
// tCrossprod_hdf5
Rcpp::RObject tCrossprod_hdf5(std::string filename, const std::string group, std::string A, Rcpp::Nullable<std::string> groupB, Rcpp::Nullable<std::string> B, Rcpp::Nullable<int> block_size, Rcpp::Nullable<bool> paral, Rcpp::Nullable<int> threads, Rcpp::Nullable<double> mixblock_size, Rcpp::Nullable<std::string> outgroup);
RcppExport SEXP _BDSM_tCrossprod_hdf5(SEXP filenameSEXP, SEXP groupSEXP, SEXP ASEXP, SEXP groupBSEXP, SEXP BSEXP, SEXP block_sizeSEXP, SEXP paralSEXP, SEXP threadsSEXP, SEXP mixblock_sizeSEXP, SEXP outgroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type groupB(groupBSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type B(BSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type paral(paralSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type mixblock_size(mixblock_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outgroup(outgroupSEXP);
    rcpp_result_gen = Rcpp::wrap(tCrossprod_hdf5(filename, group, A, groupB, B, block_size, paral, threads, mixblock_size, outgroup));
    return rcpp_result_gen;
END_RCPP
}
// bdImputeSNPHDF5
Rcpp::RObject bdImputeSNPHDF5(std::string filename, std::string group, std::string dataset, Rcpp::Nullable<std::string> outgroup, Rcpp::Nullable<std::string> outdataset, Rcpp::Nullable<bool> bycols);
RcppExport SEXP _BDSM_bdImputeSNPHDF5(SEXP filenameSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP outgroupSEXP, SEXP outdatasetSEXP, SEXP bycolsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outgroup(outgroupSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outdataset(outdatasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bycols(bycolsSEXP);
    rcpp_result_gen = Rcpp::wrap(bdImputeSNPHDF5(filename, group, dataset, outgroup, outdataset, bycols));
    return rcpp_result_gen;
END_RCPP
}
// Normalize_hdf5
Rcpp::RObject Normalize_hdf5(std::string filename, const std::string group, std::string dataset, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale, Rcpp::Nullable<int> wsize);
RcppExport SEXP _BDSM_Normalize_hdf5(SEXP filenameSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP, SEXP wsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type wsize(wsizeSEXP);
    rcpp_result_gen = Rcpp::wrap(Normalize_hdf5(filename, group, dataset, bcenter, bscale, wsize));
    return rcpp_result_gen;
END_RCPP
}
// bdPCA_hdf5
Rcpp::RObject bdPCA_hdf5(std::string filename, std::string group, std::string dataset, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale, Rcpp::Nullable<bool> force, Rcpp::Nullable<int> threads);
RcppExport SEXP _BDSM_bdPCA_hdf5(SEXP filenameSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP, SEXP forceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type force(forceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bdPCA_hdf5(filename, group, dataset, bcenter, bscale, force, threads));
    return rcpp_result_gen;
END_RCPP
}
// Normalize_Data
Rcpp::RObject Normalize_Data(Rcpp::RObject& x, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale);
RcppExport SEXP _BDSM_Normalize_Data(SEXP xSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(Normalize_Data(x, bcenter, bscale));
    return rcpp_result_gen;
END_RCPP
}
// bdwXw
Rcpp::RObject bdwXw(Rcpp::RObject X, Rcpp::RObject W, std::string op);
RcppExport SEXP _BDSM_bdwXw(SEXP XSEXP, SEXP WSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type W(WSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(bdwXw(X, W, op));
    return rcpp_result_gen;
END_RCPP
}
// bdMLR_MR
Rcpp::RObject bdMLR_MR(Rcpp::RObject X, Rcpp::RObject y, int blocks, Rcpp::Nullable<int> threads);
RcppExport SEXP _BDSM_bdMLR_MR(SEXP XSEXP, SEXP ySEXP, SEXP blocksSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type blocks(blocksSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bdMLR_MR(X, y, blocks, threads));
    return rcpp_result_gen;
END_RCPP
}
// bdcrossprod
Eigen::MatrixXd bdcrossprod(Rcpp::RObject a, Rcpp::Nullable<Rcpp::Function> transposed);
RcppExport SEXP _BDSM_bdcrossprod(SEXP aSEXP, SEXP transposedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::Function> >::type transposed(transposedSEXP);
    rcpp_result_gen = Rcpp::wrap(bdcrossprod(a, transposed));
    return rcpp_result_gen;
END_RCPP
}
// bdwproduct
Eigen::MatrixXd bdwproduct(Rcpp::RObject a, Rcpp::RObject w, std::string op);
RcppExport SEXP _BDSM_bdwproduct(SEXP aSEXP, SEXP wSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(bdwproduct(a, w, op));
    return rcpp_result_gen;
END_RCPP
}
// bdScalarwproduct
Eigen::MatrixXd bdScalarwproduct(Rcpp::RObject a, double w, std::string op);
RcppExport SEXP _BDSM_bdScalarwproduct(SEXP aSEXP, SEXP wSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< std::string >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(bdScalarwproduct(a, w, op));
    return rcpp_result_gen;
END_RCPP
}
// blockmult
Rcpp::List blockmult(Rcpp::RObject a, Rcpp::RObject b, Rcpp::Nullable<int> block_size, Rcpp::Nullable<bool> paral, Rcpp::Nullable<int> threads, Rcpp::Nullable<double> bigmatrix, Rcpp::Nullable<double> mixblock_size, Rcpp::Nullable<std::string> outfile, Rcpp::Nullable<bool> onmemory);
RcppExport SEXP _BDSM_blockmult(SEXP aSEXP, SEXP bSEXP, SEXP block_sizeSEXP, SEXP paralSEXP, SEXP threadsSEXP, SEXP bigmatrixSEXP, SEXP mixblock_sizeSEXP, SEXP outfileSEXP, SEXP onmemorySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type b(bSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type paral(paralSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type bigmatrix(bigmatrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type mixblock_size(mixblock_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type onmemory(onmemorySEXP);
    rcpp_result_gen = Rcpp::wrap(blockmult(a, b, block_size, paral, threads, bigmatrix, mixblock_size, outfile, onmemory));
    return rcpp_result_gen;
END_RCPP
}
// CholFactor
Eigen::MatrixXd CholFactor(Rcpp::RObject a);
RcppExport SEXP _BDSM_CholFactor(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(CholFactor(a));
    return rcpp_result_gen;
END_RCPP
}
// CholSolve
Eigen::MatrixXd CholSolve(Rcpp::RObject a, Rcpp::RObject b);
RcppExport SEXP _BDSM_CholSolve(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CholSolve(a, b));
    return rcpp_result_gen;
END_RCPP
}
// inversechol_par
Eigen::MatrixXd inversechol_par(Rcpp::RObject a, Rcpp::Nullable<int> threads);
RcppExport SEXP _BDSM_inversechol_par(SEXP aSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(inversechol_par(a, threads));
    return rcpp_result_gen;
END_RCPP
}
// partCrossProd
Rcpp::RObject partCrossProd(Rcpp::RObject X);
RcppExport SEXP _BDSM_partCrossProd(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(partCrossProd(X));
    return rcpp_result_gen;
END_RCPP
}
// partCrossProd_block
Rcpp::RObject partCrossProd_block(Rcpp::RObject X);
RcppExport SEXP _BDSM_partCrossProd_block(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(partCrossProd_block(X));
    return rcpp_result_gen;
END_RCPP
}
// parCrossProd
Rcpp::RObject parCrossProd(Rcpp::RObject X);
RcppExport SEXP _BDSM_parCrossProd(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(parCrossProd(X));
    return rcpp_result_gen;
END_RCPP
}
// parCrossProd_block
Rcpp::RObject parCrossProd_block(Rcpp::RObject X);
RcppExport SEXP _BDSM_parCrossProd_block(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(parCrossProd_block(X));
    return rcpp_result_gen;
END_RCPP
}
// partCrossProdEigen
Rcpp::RObject partCrossProdEigen(Rcpp::RObject X);
RcppExport SEXP _BDSM_partCrossProdEigen(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(partCrossProdEigen(X));
    return rcpp_result_gen;
END_RCPP
}
// parXYProd
Rcpp::RObject parXYProd(Rcpp::RObject X, Rcpp::RObject Y, Rcpp::Nullable<std::string> op);
RcppExport SEXP _BDSM_parXYProd(SEXP XSEXP, SEXP YSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(parXYProd(X, Y, op));
    return rcpp_result_gen;
END_RCPP
}
// parXYProdBlock
Rcpp::RObject parXYProdBlock(Rcpp::RObject X, Rcpp::RObject Y, Rcpp::Nullable<std::string> op);
RcppExport SEXP _BDSM_parXYProdBlock(SEXP XSEXP, SEXP YSEXP, SEXP opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type op(opSEXP);
    rcpp_result_gen = Rcpp::wrap(parXYProdBlock(X, Y, op));
    return rcpp_result_gen;
END_RCPP
}
// parxwxt
Rcpp::RObject parxwxt(Rcpp::RObject X, Rcpp::RObject W);
RcppExport SEXP _BDSM_parxwxt(SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(parxwxt(X, W));
    return rcpp_result_gen;
END_RCPP
}
// parxtwx
Rcpp::RObject parxtwx(Rcpp::RObject X, Rcpp::RObject W);
RcppExport SEXP _BDSM_parxtwx(SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(parxtwx(X, W));
    return rcpp_result_gen;
END_RCPP
}
// parXy
Rcpp::RObject parXy(Rcpp::RObject X, Rcpp::RObject Y);
RcppExport SEXP _BDSM_parXy(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(parXy(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// JacobianSVD
Rcpp::RObject JacobianSVD(Rcpp::RObject X);
RcppExport SEXP _BDSM_JacobianSVD(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(JacobianSVD(X));
    return rcpp_result_gen;
END_RCPP
}
// bdtsvd
Rcpp::RObject bdtsvd(Rcpp::RObject X, Rcpp::Nullable<int> k);
RcppExport SEXP _BDSM_bdtsvd(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(bdtsvd(X, k));
    return rcpp_result_gen;
END_RCPP
}
// bdsvd
Rcpp::RObject bdsvd(Rcpp::RObject X);
RcppExport SEXP _BDSM_bdsvd(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(bdsvd(X));
    return rcpp_result_gen;
END_RCPP
}
// bdpseudoinv
Rcpp::RObject bdpseudoinv(const Rcpp::RObject& X);
RcppExport SEXP _BDSM_bdpseudoinv(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(bdpseudoinv(X));
    return rcpp_result_gen;
END_RCPP
}
// bdQR
Rcpp::RObject bdQR(const Rcpp::RObject& X, Rcpp::Nullable<bool> thin);
RcppExport SEXP _BDSM_bdQR(SEXP XSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(bdQR(X, thin));
    return rcpp_result_gen;
END_RCPP
}
// review_decomposition
Rcpp::RObject review_decomposition(Eigen::MatrixXd R, int n);
RcppExport SEXP _BDSM_review_decomposition(SEXP RSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(review_decomposition(R, n));
    return rcpp_result_gen;
END_RCPP
}
// bddtrsm
Rcpp::RObject bddtrsm(Rcpp::RObject R, Rcpp::RObject Z, Rcpp::Nullable<int> threads);
RcppExport SEXP _BDSM_bddtrsm(SEXP RSEXP, SEXP ZSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type R(RSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bddtrsm(R, Z, threads));
    return rcpp_result_gen;
END_RCPP
}
// Create_HDF5_matrix_file
Rcpp::RObject Create_HDF5_matrix_file(std::string filename, RObject mat, Rcpp::Nullable<std::string> group, Rcpp::Nullable<std::string> dataset, Rcpp::Nullable<bool> transp);
RcppExport SEXP _BDSM_Create_HDF5_matrix_file(SEXP filenameSEXP, SEXP matSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP transpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type group(groupSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type transp(transpSEXP);
    rcpp_result_gen = Rcpp::wrap(Create_HDF5_matrix_file(filename, mat, group, dataset, transp));
    return rcpp_result_gen;
END_RCPP
}
// Create_HDF5_matrix
Rcpp::RObject Create_HDF5_matrix(RObject mat, std::string filename, std::string group, std::string dataset, Rcpp::Nullable<bool> transp);
RcppExport SEXP _BDSM_Create_HDF5_matrix(SEXP matSEXP, SEXP filenameSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP transpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type group(groupSEXP);
    Rcpp::traits::input_parameter< std::string >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type transp(transpSEXP);
    rcpp_result_gen = Rcpp::wrap(Create_HDF5_matrix(mat, filename, group, dataset, transp));
    return rcpp_result_gen;
END_RCPP
}
// Remove_HDF5_element
Rcpp::RObject Remove_HDF5_element(std::string filename, std::string element);
RcppExport SEXP _BDSM_Remove_HDF5_element(SEXP filenameSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type element(elementSEXP);
    rcpp_result_gen = Rcpp::wrap(Remove_HDF5_element(filename, element));
    return rcpp_result_gen;
END_RCPP
}
// bdInvCholesky
Eigen::MatrixXd bdInvCholesky(const Rcpp::RObject& x);
RcppExport SEXP _BDSM_bdInvCholesky(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bdInvCholesky(x));
    return rcpp_result_gen;
END_RCPP
}
// bdSVD
Rcpp::RObject bdSVD(const Rcpp::RObject& x, Rcpp::Nullable<int> k, Rcpp::Nullable<int> nev, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale);
RcppExport SEXP _BDSM_bdSVD(SEXP xSEXP, SEXP kSEXP, SEXP nevSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type nev(nevSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(bdSVD(x, k, nev, bcenter, bscale));
    return rcpp_result_gen;
END_RCPP
}
// bdSVD_hdf5
Rcpp::RObject bdSVD_hdf5(const Rcpp::RObject& x, Rcpp::Nullable<CharacterVector> group, Rcpp::Nullable<CharacterVector> dataset, Rcpp::Nullable<int> k, Rcpp::Nullable<int> q, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale, Rcpp::Nullable<int> threads);
RcppExport SEXP _BDSM_bdSVD_hdf5(SEXP xSEXP, SEXP groupSEXP, SEXP datasetSEXP, SEXP kSEXP, SEXP qSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::RObject& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<CharacterVector> >::type group(groupSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<CharacterVector> >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(bdSVD_hdf5(x, group, dataset, k, q, bcenter, bscale, threads));
    return rcpp_result_gen;
END_RCPP
}
// bdSVD_lapack
Rcpp::RObject bdSVD_lapack(Rcpp::RObject x, Rcpp::Nullable<bool> bcenter, Rcpp::Nullable<bool> bscale);
RcppExport SEXP _BDSM_bdSVD_lapack(SEXP xSEXP, SEXP bcenterSEXP, SEXP bscaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bcenter(bcenterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<bool> >::type bscale(bscaleSEXP);
    rcpp_result_gen = Rcpp::wrap(bdSVD_lapack(x, bcenter, bscale));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BDSM_bdRemovelowdata", (DL_FUNC) &_BDSM_bdRemovelowdata, 7},
    {"_BDSM_Crossprod_hdf5", (DL_FUNC) &_BDSM_Crossprod_hdf5, 10},
    {"_BDSM_blockmult_hdf5", (DL_FUNC) &_BDSM_blockmult_hdf5, 9},
    {"_BDSM_tCrossprod_hdf5", (DL_FUNC) &_BDSM_tCrossprod_hdf5, 10},
    {"_BDSM_bdImputeSNPHDF5", (DL_FUNC) &_BDSM_bdImputeSNPHDF5, 6},
    {"_BDSM_Normalize_hdf5", (DL_FUNC) &_BDSM_Normalize_hdf5, 6},
    {"_BDSM_bdPCA_hdf5", (DL_FUNC) &_BDSM_bdPCA_hdf5, 7},
    {"_BDSM_Normalize_Data", (DL_FUNC) &_BDSM_Normalize_Data, 3},
    {"_BDSM_bdwXw", (DL_FUNC) &_BDSM_bdwXw, 3},
    {"_BDSM_bdMLR_MR", (DL_FUNC) &_BDSM_bdMLR_MR, 4},
    {"_BDSM_bdcrossprod", (DL_FUNC) &_BDSM_bdcrossprod, 2},
    {"_BDSM_bdwproduct", (DL_FUNC) &_BDSM_bdwproduct, 3},
    {"_BDSM_bdScalarwproduct", (DL_FUNC) &_BDSM_bdScalarwproduct, 3},
    {"_BDSM_blockmult", (DL_FUNC) &_BDSM_blockmult, 9},
    {"_BDSM_CholFactor", (DL_FUNC) &_BDSM_CholFactor, 1},
    {"_BDSM_CholSolve", (DL_FUNC) &_BDSM_CholSolve, 2},
    {"_BDSM_inversechol_par", (DL_FUNC) &_BDSM_inversechol_par, 2},
    {"_BDSM_partCrossProd", (DL_FUNC) &_BDSM_partCrossProd, 1},
    {"_BDSM_partCrossProd_block", (DL_FUNC) &_BDSM_partCrossProd_block, 1},
    {"_BDSM_parCrossProd", (DL_FUNC) &_BDSM_parCrossProd, 1},
    {"_BDSM_parCrossProd_block", (DL_FUNC) &_BDSM_parCrossProd_block, 1},
    {"_BDSM_partCrossProdEigen", (DL_FUNC) &_BDSM_partCrossProdEigen, 1},
    {"_BDSM_parXYProd", (DL_FUNC) &_BDSM_parXYProd, 3},
    {"_BDSM_parXYProdBlock", (DL_FUNC) &_BDSM_parXYProdBlock, 3},
    {"_BDSM_parxwxt", (DL_FUNC) &_BDSM_parxwxt, 2},
    {"_BDSM_parxtwx", (DL_FUNC) &_BDSM_parxtwx, 2},
    {"_BDSM_parXy", (DL_FUNC) &_BDSM_parXy, 2},
    {"_BDSM_JacobianSVD", (DL_FUNC) &_BDSM_JacobianSVD, 1},
    {"_BDSM_bdtsvd", (DL_FUNC) &_BDSM_bdtsvd, 2},
    {"_BDSM_bdsvd", (DL_FUNC) &_BDSM_bdsvd, 1},
    {"_BDSM_bdpseudoinv", (DL_FUNC) &_BDSM_bdpseudoinv, 1},
    {"_BDSM_bdQR", (DL_FUNC) &_BDSM_bdQR, 2},
    {"_BDSM_review_decomposition", (DL_FUNC) &_BDSM_review_decomposition, 2},
    {"_BDSM_bddtrsm", (DL_FUNC) &_BDSM_bddtrsm, 3},
    {"_BDSM_Create_HDF5_matrix_file", (DL_FUNC) &_BDSM_Create_HDF5_matrix_file, 5},
    {"_BDSM_Create_HDF5_matrix", (DL_FUNC) &_BDSM_Create_HDF5_matrix, 5},
    {"_BDSM_Remove_HDF5_element", (DL_FUNC) &_BDSM_Remove_HDF5_element, 2},
    {"_BDSM_bdInvCholesky", (DL_FUNC) &_BDSM_bdInvCholesky, 1},
    {"_BDSM_bdSVD", (DL_FUNC) &_BDSM_bdSVD, 5},
    {"_BDSM_bdSVD_hdf5", (DL_FUNC) &_BDSM_bdSVD_hdf5, 8},
    {"_BDSM_bdSVD_lapack", (DL_FUNC) &_BDSM_bdSVD_lapack, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BDSM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
