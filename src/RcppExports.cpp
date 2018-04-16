// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// IGESS
RcppExport SEXP IGESS(SEXP Xs, arma::vec& y, SEXP SS, SEXP opts, std::string logfile, double lbPval, bool verbose);
RcppExport SEXP _IGESS_IGESS(SEXP XsSEXP, SEXP ySEXP, SEXP SSSEXP, SEXP optsSEXP, SEXP logfileSEXP, SEXP lbPvalSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< std::string >::type logfile(logfileSEXP);
    Rcpp::traits::input_parameter< double >::type lbPval(lbPvalSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(IGESS(Xs, y, SS, opts, logfile, lbPval, verbose));
    return rcpp_result_gen;
END_RCPP
}
// IGESSCV
RcppExport SEXP IGESSCV(SEXP Xs, arma::vec& y, SEXP SS, SEXP opts, std::string logfile, double lbPval, Rcpp::String measure);
RcppExport SEXP _IGESS_IGESSCV(SEXP XsSEXP, SEXP ySEXP, SEXP SSSEXP, SEXP optsSEXP, SEXP logfileSEXP, SEXP lbPvalSEXP, SEXP measureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Xs(XsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< std::string >::type logfile(logfileSEXP);
    Rcpp::traits::input_parameter< double >::type lbPval(lbPvalSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type measure(measureSEXP);
    rcpp_result_gen = Rcpp::wrap(IGESSCV(Xs, y, SS, opts, logfile, lbPval, measure));
    return rcpp_result_gen;
END_RCPP
}
// IGESS_Plink
RcppExport SEXP IGESS_Plink(Rcpp::String genoplinkfile, SEXP SS, SEXP opts, std::string logfile, double lbPval);
RcppExport SEXP _IGESS_IGESS_Plink(SEXP genoplinkfileSEXP, SEXP SSSEXP, SEXP optsSEXP, SEXP logfileSEXP, SEXP lbPvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type genoplinkfile(genoplinkfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< std::string >::type logfile(logfileSEXP);
    Rcpp::traits::input_parameter< double >::type lbPval(lbPvalSEXP);
    rcpp_result_gen = Rcpp::wrap(IGESS_Plink(genoplinkfile, SS, opts, logfile, lbPval));
    return rcpp_result_gen;
END_RCPP
}
// IGESSCV_Plink
RcppExport SEXP IGESSCV_Plink(Rcpp::String genoplinkfile, SEXP SS, SEXP opts, std::string logfile, double lbPval, Rcpp::String measure);
RcppExport SEXP _IGESS_IGESSCV_Plink(SEXP genoplinkfileSEXP, SEXP SSSEXP, SEXP optsSEXP, SEXP logfileSEXP, SEXP lbPvalSEXP, SEXP measureSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type genoplinkfile(genoplinkfileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< std::string >::type logfile(logfileSEXP);
    Rcpp::traits::input_parameter< double >::type lbPval(lbPvalSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type measure(measureSEXP);
    rcpp_result_gen = Rcpp::wrap(IGESSCV_Plink(genoplinkfile, SS, opts, logfile, lbPval, measure));
    return rcpp_result_gen;
END_RCPP
}
// IGESS_Predict
RcppExport SEXP IGESS_Predict(SEXP fit_, arma::mat& X);
RcppExport SEXP _IGESS_IGESS_Predict(SEXP fit_SEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type fit_(fit_SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(IGESS_Predict(fit_, X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IGESS_IGESS", (DL_FUNC) &_IGESS_IGESS, 7},
    {"_IGESS_IGESSCV", (DL_FUNC) &_IGESS_IGESSCV, 7},
    {"_IGESS_IGESS_Plink", (DL_FUNC) &_IGESS_IGESS_Plink, 5},
    {"_IGESS_IGESSCV_Plink", (DL_FUNC) &_IGESS_IGESSCV_Plink, 6},
    {"_IGESS_IGESS_Predict", (DL_FUNC) &_IGESS_IGESS_Predict, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_IGESS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
