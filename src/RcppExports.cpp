// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// AnyCharMatch
int AnyCharMatch(CharacterVector x, CharacterVector a);
RcppExport SEXP _hutilscpp_AnyCharMatch(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(AnyCharMatch(x, a));
    return rcpp_result_gen;
END_RCPP
}
// AnyWhich
int AnyWhich(NumericVector x, double a, bool gt, bool lt, bool eq);
RcppExport SEXP _hutilscpp_AnyWhich(SEXP xSEXP, SEXP aSEXP, SEXP gtSEXP, SEXP ltSEXP, SEXP eqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< bool >::type gt(gtSEXP);
    Rcpp::traits::input_parameter< bool >::type lt(ltSEXP);
    Rcpp::traits::input_parameter< bool >::type eq(eqSEXP);
    rcpp_result_gen = Rcpp::wrap(AnyWhich(x, a, gt, lt, eq));
    return rcpp_result_gen;
END_RCPP
}
// anyOutside_int
int anyOutside_int(IntegerVector x, int a, int b, bool nas_present, bool na_is_outside);
RcppExport SEXP _hutilscpp_anyOutside_int(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP nas_presentSEXP, SEXP na_is_outsideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type nas_present(nas_presentSEXP);
    Rcpp::traits::input_parameter< bool >::type na_is_outside(na_is_outsideSEXP);
    rcpp_result_gen = Rcpp::wrap(anyOutside_int(x, a, b, nas_present, na_is_outside));
    return rcpp_result_gen;
END_RCPP
}
// anyOutside_dbl
int anyOutside_dbl(DoubleVector x, double a, double b, bool nas_present, bool na_is_outside);
RcppExport SEXP _hutilscpp_anyOutside_dbl(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP nas_presentSEXP, SEXP na_is_outsideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DoubleVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type nas_present(nas_presentSEXP);
    Rcpp::traits::input_parameter< bool >::type na_is_outside(na_is_outsideSEXP);
    rcpp_result_gen = Rcpp::wrap(anyOutside_dbl(x, a, b, nas_present, na_is_outside));
    return rcpp_result_gen;
END_RCPP
}
// do_cumsum_reset_logical
IntegerVector do_cumsum_reset_logical(LogicalVector x);
RcppExport SEXP _hutilscpp_do_cumsum_reset_logical(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_cumsum_reset_logical(x));
    return rcpp_result_gen;
END_RCPP
}
// do_cumsum_reset_integer
IntegerVector do_cumsum_reset_integer(LogicalVector x, IntegerVector y);
RcppExport SEXP _hutilscpp_do_cumsum_reset_integer(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_cumsum_reset_integer(x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_cumsum_reset_double
NumericVector do_cumsum_reset_double(LogicalVector x, NumericVector y);
RcppExport SEXP _hutilscpp_do_cumsum_reset_double(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_cumsum_reset_double(x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_which_first
int do_which_first(LogicalVector x);
RcppExport SEXP _hutilscpp_do_which_first(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_which_first(x));
    return rcpp_result_gen;
END_RCPP
}
// do_which_last
int do_which_last(LogicalVector x);
RcppExport SEXP _hutilscpp_do_which_last(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_which_last(x));
    return rcpp_result_gen;
END_RCPP
}
// do_which_first_false
int do_which_first_false(LogicalVector x);
RcppExport SEXP _hutilscpp_do_which_first_false(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_which_first_false(x));
    return rcpp_result_gen;
END_RCPP
}
// haversine_distance
double haversine_distance(double olat1, double olon1, double olat2, double olon2, double delta_lat, double delta_lon, bool unitless);
RcppExport SEXP _hutilscpp_haversine_distance(SEXP olat1SEXP, SEXP olon1SEXP, SEXP olat2SEXP, SEXP olon2SEXP, SEXP delta_latSEXP, SEXP delta_lonSEXP, SEXP unitlessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type olat1(olat1SEXP);
    Rcpp::traits::input_parameter< double >::type olon1(olon1SEXP);
    Rcpp::traits::input_parameter< double >::type olat2(olat2SEXP);
    Rcpp::traits::input_parameter< double >::type olon2(olon2SEXP);
    Rcpp::traits::input_parameter< double >::type delta_lat(delta_latSEXP);
    Rcpp::traits::input_parameter< double >::type delta_lon(delta_lonSEXP);
    Rcpp::traits::input_parameter< bool >::type unitless(unitlessSEXP);
    rcpp_result_gen = Rcpp::wrap(haversine_distance(olat1, olon1, olat2, olon2, delta_lat, delta_lon, unitless));
    return rcpp_result_gen;
END_RCPP
}
// haversineDistance
NumericVector haversineDistance(NumericVector lat1, NumericVector lon1, NumericVector lat2, NumericVector lon2, bool unitless);
RcppExport SEXP _hutilscpp_haversineDistance(SEXP lat1SEXP, SEXP lon1SEXP, SEXP lat2SEXP, SEXP lon2SEXP, SEXP unitlessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< bool >::type unitless(unitlessSEXP);
    rcpp_result_gen = Rcpp::wrap(haversineDistance(lat1, lon1, lat2, lon2, unitless));
    return rcpp_result_gen;
END_RCPP
}
// which_min_HaversineDistance
int which_min_HaversineDistance(NumericVector lat1, NumericVector lon1, double lat2, double lon2, double upperBound);
RcppExport SEXP _hutilscpp_which_min_HaversineDistance(SEXP lat1SEXP, SEXP lon1SEXP, SEXP lat2SEXP, SEXP lon2SEXP, SEXP upperBoundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type upperBound(upperBoundSEXP);
    rcpp_result_gen = Rcpp::wrap(which_min_HaversineDistance(lat1, lon1, lat2, lon2, upperBound));
    return rcpp_result_gen;
END_RCPP
}
// match_min_Haversine
IntegerVector match_min_Haversine(NumericVector lat1, NumericVector lon1, NumericVector lat2, NumericVector lon2, IntegerVector tabl, double r);
RcppExport SEXP _hutilscpp_match_min_Haversine(SEXP lat1SEXP, SEXP lon1SEXP, SEXP lat2SEXP, SEXP lon2SEXP, SEXP tablSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type tabl(tablSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(match_min_Haversine(lat1, lon1, lat2, lon2, tabl, r));
    return rcpp_result_gen;
END_RCPP
}
// lexicalCast
std::vector<std::string> lexicalCast(std::vector<int> v);
RcppExport SEXP _hutilscpp_lexicalCast(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(lexicalCast(v));
    return rcpp_result_gen;
END_RCPP
}
// pmax3
NumericVector pmax3(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _hutilscpp_pmax3(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(pmax3(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxC_dbl
NumericVector do_pmaxC_dbl(NumericVector x, double a);
RcppExport SEXP _hutilscpp_do_pmaxC_dbl(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxC_dbl(x, a));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxC_int
IntegerVector do_pmaxC_int(IntegerVector x, int a);
RcppExport SEXP _hutilscpp_do_pmaxC_int(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxC_int(x, a));
    return rcpp_result_gen;
END_RCPP
}
// do_pmax0
NumericVector do_pmax0(NumericVector x);
RcppExport SEXP _hutilscpp_do_pmax0(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmax0(x));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxIP_int
IntegerVector do_pmaxIP_int(IntegerVector x, int a);
RcppExport SEXP _hutilscpp_do_pmaxIP_int(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxIP_int(x, a));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxIP_dbl
DoubleVector do_pmaxIP_dbl(DoubleVector x, double a);
RcppExport SEXP _hutilscpp_do_pmaxIP_dbl(SEXP xSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DoubleVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxIP_dbl(x, a));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxIPnum0
NumericVector do_pmaxIPnum0(NumericVector x);
RcppExport SEXP _hutilscpp_do_pmaxIPnum0(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxIPnum0(x));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxIPint0
IntegerVector do_pmaxIPint0(IntegerVector x);
RcppExport SEXP _hutilscpp_do_pmaxIPint0(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxIPint0(x));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxNumNum
NumericVector do_pmaxNumNum(NumericVector x, NumericVector y);
RcppExport SEXP _hutilscpp_do_pmaxNumNum(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxNumNum(x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_pmaxIntInt
IntegerVector do_pmaxIntInt(IntegerVector x, IntegerVector y);
RcppExport SEXP _hutilscpp_do_pmaxIntInt(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmaxIntInt(x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_pminC
NumericVector do_pminC(NumericVector x, double a, bool in_place);
RcppExport SEXP _hutilscpp_do_pminC(SEXP xSEXP, SEXP aSEXP, SEXP in_placeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< bool >::type in_place(in_placeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pminC(x, a, in_place));
    return rcpp_result_gen;
END_RCPP
}
// do_pmin0_dbl
NumericVector do_pmin0_dbl(NumericVector x, bool in_place);
RcppExport SEXP _hutilscpp_do_pmin0_dbl(SEXP xSEXP, SEXP in_placeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type in_place(in_placeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmin0_dbl(x, in_place));
    return rcpp_result_gen;
END_RCPP
}
// do_pmin0_int
IntegerVector do_pmin0_int(IntegerVector x, bool in_place);
RcppExport SEXP _hutilscpp_do_pmin0_int(SEXP xSEXP, SEXP in_placeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type in_place(in_placeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_pmin0_int(x, in_place));
    return rcpp_result_gen;
END_RCPP
}
// do_pminV
NumericVector do_pminV(NumericVector x, NumericVector y);
RcppExport SEXP _hutilscpp_do_pminV(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_pminV(x, y));
    return rcpp_result_gen;
END_RCPP
}
// squishn
NumericVector squishn(NumericVector x, double a, double b, bool in_place);
RcppExport SEXP _hutilscpp_squishn(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP in_placeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type in_place(in_placeSEXP);
    rcpp_result_gen = Rcpp::wrap(squishn(x, a, b, in_place));
    return rcpp_result_gen;
END_RCPP
}
// squishi
IntegerVector squishi(IntegerVector x, int a, int b, bool in_place);
RcppExport SEXP _hutilscpp_squishi(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP, SEXP in_placeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    Rcpp::traits::input_parameter< bool >::type in_place(in_placeSEXP);
    rcpp_result_gen = Rcpp::wrap(squishi(x, a, b, in_place));
    return rcpp_result_gen;
END_RCPP
}
// texParse
Rcpp::IntegerMatrix texParse(LogicalVector open, LogicalVector close, int maxTeXGroup);
RcppExport SEXP _hutilscpp_texParse(SEXP openSEXP, SEXP closeSEXP, SEXP maxTeXGroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type open(openSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type close(closeSEXP);
    Rcpp::traits::input_parameter< int >::type maxTeXGroup(maxTeXGroupSEXP);
    rcpp_result_gen = Rcpp::wrap(texParse(open, close, maxTeXGroup));
    return rcpp_result_gen;
END_RCPP
}
// extractMandatory
CharacterVector extractMandatory(CharacterVector x, CharacterVector command);
RcppExport SEXP _hutilscpp_extractMandatory(SEXP xSEXP, SEXP commandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type command(commandSEXP);
    rcpp_result_gen = Rcpp::wrap(extractMandatory(x, command));
    return rcpp_result_gen;
END_RCPP
}
// do_which_true_onwards
int do_which_true_onwards(LogicalVector x);
RcppExport SEXP _hutilscpp_do_which_true_onwards(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(do_which_true_onwards(x));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP do_c_pmax(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_hutilscpp_AnyCharMatch", (DL_FUNC) &_hutilscpp_AnyCharMatch, 2},
    {"_hutilscpp_AnyWhich", (DL_FUNC) &_hutilscpp_AnyWhich, 5},
    {"_hutilscpp_anyOutside_int", (DL_FUNC) &_hutilscpp_anyOutside_int, 5},
    {"_hutilscpp_anyOutside_dbl", (DL_FUNC) &_hutilscpp_anyOutside_dbl, 5},
    {"_hutilscpp_do_cumsum_reset_logical", (DL_FUNC) &_hutilscpp_do_cumsum_reset_logical, 1},
    {"_hutilscpp_do_cumsum_reset_integer", (DL_FUNC) &_hutilscpp_do_cumsum_reset_integer, 2},
    {"_hutilscpp_do_cumsum_reset_double", (DL_FUNC) &_hutilscpp_do_cumsum_reset_double, 2},
    {"_hutilscpp_do_which_first", (DL_FUNC) &_hutilscpp_do_which_first, 1},
    {"_hutilscpp_do_which_last", (DL_FUNC) &_hutilscpp_do_which_last, 1},
    {"_hutilscpp_do_which_first_false", (DL_FUNC) &_hutilscpp_do_which_first_false, 1},
    {"_hutilscpp_haversine_distance", (DL_FUNC) &_hutilscpp_haversine_distance, 7},
    {"_hutilscpp_haversineDistance", (DL_FUNC) &_hutilscpp_haversineDistance, 5},
    {"_hutilscpp_which_min_HaversineDistance", (DL_FUNC) &_hutilscpp_which_min_HaversineDistance, 5},
    {"_hutilscpp_match_min_Haversine", (DL_FUNC) &_hutilscpp_match_min_Haversine, 6},
    {"_hutilscpp_lexicalCast", (DL_FUNC) &_hutilscpp_lexicalCast, 1},
    {"_hutilscpp_pmax3", (DL_FUNC) &_hutilscpp_pmax3, 3},
    {"_hutilscpp_do_pmaxC_dbl", (DL_FUNC) &_hutilscpp_do_pmaxC_dbl, 2},
    {"_hutilscpp_do_pmaxC_int", (DL_FUNC) &_hutilscpp_do_pmaxC_int, 2},
    {"_hutilscpp_do_pmax0", (DL_FUNC) &_hutilscpp_do_pmax0, 1},
    {"_hutilscpp_do_pmaxIP_int", (DL_FUNC) &_hutilscpp_do_pmaxIP_int, 2},
    {"_hutilscpp_do_pmaxIP_dbl", (DL_FUNC) &_hutilscpp_do_pmaxIP_dbl, 2},
    {"_hutilscpp_do_pmaxIPnum0", (DL_FUNC) &_hutilscpp_do_pmaxIPnum0, 1},
    {"_hutilscpp_do_pmaxIPint0", (DL_FUNC) &_hutilscpp_do_pmaxIPint0, 1},
    {"_hutilscpp_do_pmaxNumNum", (DL_FUNC) &_hutilscpp_do_pmaxNumNum, 2},
    {"_hutilscpp_do_pmaxIntInt", (DL_FUNC) &_hutilscpp_do_pmaxIntInt, 2},
    {"_hutilscpp_do_pminC", (DL_FUNC) &_hutilscpp_do_pminC, 3},
    {"_hutilscpp_do_pmin0_dbl", (DL_FUNC) &_hutilscpp_do_pmin0_dbl, 2},
    {"_hutilscpp_do_pmin0_int", (DL_FUNC) &_hutilscpp_do_pmin0_int, 2},
    {"_hutilscpp_do_pminV", (DL_FUNC) &_hutilscpp_do_pminV, 2},
    {"_hutilscpp_squishn", (DL_FUNC) &_hutilscpp_squishn, 4},
    {"_hutilscpp_squishi", (DL_FUNC) &_hutilscpp_squishi, 4},
    {"_hutilscpp_texParse", (DL_FUNC) &_hutilscpp_texParse, 3},
    {"_hutilscpp_extractMandatory", (DL_FUNC) &_hutilscpp_extractMandatory, 2},
    {"_hutilscpp_do_which_true_onwards", (DL_FUNC) &_hutilscpp_do_which_true_onwards, 1},
    {"do_c_pmax",                              (DL_FUNC) &do_c_pmax,                              3},
    {NULL, NULL, 0}
};

RcppExport void R_init_hutilscpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
