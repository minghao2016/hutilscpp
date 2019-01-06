//' @name pmaxC-internal
//' @name do_pmaxC
//' @title Internal pmaxC helpers
//' @description Internal functions used when the overheads of assertions
//' would be too expensive.
//' @export do_pmaxC do_pmax0 do_pmaxIPint0 do_pmaxIPnum0

#include <Rcpp.h>
using namespace Rcpp;
// #include <RcppParallel.h>
// using namespace Rcpp;
//
// struct Pmax : public RcppParallel::Worker {
//   struct Apply {
//     double mx;
//     Apply(double mx_)
//       : mx(mx_)
//     {}
//
//     double operator()(const double x) const
//     {
//       return x > mx ? x : mx;
//     }
//   };
//
//   const RcppParallel::RVector<double> input;
//   RcppParallel::RVector<double> output;
//
//   Apply f;
//
//   Pmax(const Rcpp::NumericVector input_,
//        Rcpp::NumericVector output_,
//        double mx_)
//     : input(input_), output(output_), f(mx_)
//   {}
//
//   void operator()(std::size_t begin, std::size_t end)
//   {
//     std::transform(
//       input.begin() + begin,
//       input.begin() + end,
//       output.begin() + begin,
//       f
//     );
//   }
// };
//
// // [[Rcpp::export]]
// Rcpp::NumericVector pmaxC(Rcpp::NumericVector x, double a)
// {
//   Rcpp::NumericVector res = Rcpp::no_init_vector(x.size());
//   Pmax p(x, res, a);
//   RcppParallel::parallelFor(0, x.size(), p);
//
//   return res;
// }

//' @rdname do_pmaxC
// [[Rcpp::export]]
NumericVector do_pmaxC(NumericVector x, double a) {
  int n = x.length();
  NumericVector out(n);

  for (int i = 0; i < n; ++i) {
    double xi = x[i];
    if (xi < a) {
      out[i] = a;
    } else {
      out[i] = xi;
    }
  }

  return out;
}

//' @rdname do_pmaxC
// [[Rcpp::export]]
NumericVector do_pmax0(NumericVector x) {
  int n = x.length();
  NumericVector out(n);

  for (int i = 0; i < n; ++i) {
    double xi = x[i];
    if (xi > 0) {
      out[i] = xi;
    }
  }
  return out;
}

//' @rdname do_pmaxC
// [[Rcpp::export]]
NumericVector do_pmaxIPnum0(NumericVector x) {
  int n = x.length();

  for (int i = 0; i < n; ++i) {
    if (x[i] < 0) {
      x[i] = 0;
    }
  }
  return x;
}

//' @rdname do_pmaxC
// [[Rcpp::export]]
IntegerVector do_pmaxIPint0(IntegerVector x) {
  int n = x.length();

  for (int i = 0; i < n; ++i) {
    if (x[i] < 0) {
      x[i] = 0;
    }
  }
  return x;
}


