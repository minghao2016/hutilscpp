% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/which_first.R
\name{which_first}
\alias{which_first}
\alias{which_last}
\title{Where does a logical expression first return \code{TRUE}?}
\usage{
which_first(
  expr,
  verbose = FALSE,
  reverse = FALSE,
  sexpr,
  eval_parent_n = 1L,
  suppressWarning = getOption("hutilscpp_suppressWarning", FALSE),
  use.which.max = FALSE
)

which_last(
  expr,
  verbose = FALSE,
  reverse = FALSE,
  suppressWarning = getOption("hutilscpp_suppressWarning", FALSE)
)
}
\arguments{
\item{expr}{An expression, such as \code{x == 2}.}

\item{verbose}{\describe{
\item{\code{logical(1)}, default: \code{FALSE}}{If \code{TRUE} a message is emitted
if \code{expr} could not be handled in the advertised way.}
}}

\item{reverse}{\describe{
\item{\code{logical(1)}, default: \code{FALSE}}{Scan \code{expr} in reverse.}
}}

\item{sexpr}{Equivalent to \code{substitute(expr)}. For internal use.}

\item{eval_parent_n}{Passed to \code{eval.parent}, the environment in which
\code{expr} is evaluated.}

\item{suppressWarning}{Either a \code{FALSE} or \code{TRUE}, whether or not
warnings should be suppressed. Also supports a string input which suppresses a
warning if it matches as a regular expression.}

\item{use.which.max}{If \code{TRUE}, \code{which.max} is dispatched immediately,
even if \code{expr} would be amenable to separation. Useful when evaluating
many small \code{expr}'s when these are known in advance.}
}
\value{
The same as \code{which.max(expr)} or \code{which(expr)[1]} but returns \code{0L}
when \code{expr} has no \code{TRUE} values.
}
\description{
A faster and safer version of \code{which.max} applied
to simple-to-parse logical expressions.
}
\details{
If the \code{expr} is of the form \code{LHS <operator> RHS}
and \code{LHS} is a single symbol, \code{operator} is one of
\code{==},  \code{!=}, \code{>}, \code{>=}, \code{<}, \code{<=},
\code{\%in\%},
or
\code{\%between\%},
and \code{RHS} is numeric, then \code{expr} is not
evaluated directly; instead, each element of \code{LHS} is compared
individually.

If \code{expr} is not of the above form, then \code{expr} is evaluated
and passed to \code{which.max}.

Using this function can be significantly faster than the alternatives
when the computation
of \code{expr} would be expensive, though the difference is only likely to
be clear when \code{length(x)} is much larger than 10 million.
But even for smaller vectors, it has the benefit of returning
\code{0L} if none of the values in \code{expr} are \code{TRUE}, unlike
\code{which.max}.

Compared to \code{\link[base:funprog]{Position}} for an appropriate
choice of \code{f} the speed of \code{which_first} is not much faster
when the expression is \code{TRUE} for some position. However, \code{which_first}
is faster when all elements of \code{expr} are \code{FALSE}.
Thus \code{which_first} has a smaller worst-case time than the
alternatives for most \code{x}.

Missing values on the RHS are handled specially.
\code{which_first(x \%between\% c(NA, 1))} for example is equivalent to
\code{which_first(x <= 1)}, as in \code{\link[data.table:between]{data.table::between}}.
}
\examples{

N <- 1e5
# N <- 1e8  ## too slow for CRAN

# Two examples, from slowest to fastest,
# run with N = 1e8 elements

                                       # seconds
x <- rep_len(runif(1e4, 0, 6), N)
bench_system_time(x > 5)
bench_system_time(which(x > 5))        # 0.8
bench_system_time(which.max(x > 5))    # 0.3
bench_system_time(which_first(x > 5))  # 0.000

## Worst case: have to check all N elements
x <- double(N)
bench_system_time(x > 0)
bench_system_time(which(x > 0))        # 1.0
bench_system_time(which.max(x > 0))    # 0.4  but returns 1, not 0
bench_system_time(which_first(x > 0))  # 0.1

x <- as.character(x)
# bench_system_time(which(x == 5))     # 2.2
bench_system_time(which.max(x == 5))   # 1.6
bench_system_time(which_first(x == 5)) # 1.3

}
