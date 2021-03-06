% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{bdInvCholesky}
\alias{bdInvCholesky}
\title{Inverse Cholesky of Delayed Array}
\usage{
bdInvCholesky(x)
}
\arguments{
\item{x}{numerical or Delayed Array matrix. If x is Hermitian and positive-definite performs}
}
\value{
inverse matrix of d
}
\description{
This function get the inverse of a numerical or Delayed Array matrix. If x is hermitian and positive-definite matrix then 
performs get the inverse using Cholesky decomposition
}
\examples{

library(DelayedArray)

A <- matrix(c(3,4,3,4,8,6,3,6,9), byrow = TRUE, ncol = 3)
bdInvCholesky(A)

# with Delayed Array
DA <- DelayedArray(A)
bdInvCholesky(DA)

}
