#ifndef cpphutils_H
#define cpphutils_H

#include <Rcpp.h>
using namespace Rcpp;

DoubleVector do_range_dbl(NumericVector x, double halt_if_min = 1, double halt_if_max = -1);
IntegerVector do_range_int(IntegerVector x, int halt_if_min = 1, int halt_if_max = -1);

#endif