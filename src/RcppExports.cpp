// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// stat_
Rcpp::List stat_(Rcpp::CharacterVector path, bool fail);
RcppExport SEXP _fs_stat_(SEXP pathSEXP, SEXP failSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type fail(failSEXP);
    rcpp_result_gen = Rcpp::wrap(stat_(path, fail));
    return rcpp_result_gen;
END_RCPP
}
// unlink_
void unlink_(Rcpp::CharacterVector path);
RcppExport SEXP _fs_unlink_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type path(pathSEXP);
    unlink_(path);
    return R_NilValue;
END_RCPP
}
// touch_
void touch_(Rcpp::CharacterVector path, double atime, double mtime);
RcppExport SEXP _fs_touch_(SEXP pathSEXP, SEXP atimeSEXP, SEXP mtimeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type atime(atimeSEXP);
    Rcpp::traits::input_parameter< double >::type mtime(mtimeSEXP);
    touch_(path, atime, mtime);
    return R_NilValue;
END_RCPP
}
// users_
Rcpp::List users_();
RcppExport SEXP _fs_users_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(users_());
    return rcpp_result_gen;
END_RCPP
}
// tidy_
Rcpp::CharacterVector tidy_(Rcpp::CharacterVector path);
RcppExport SEXP _fs_tidy_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(tidy_(path));
    return rcpp_result_gen;
END_RCPP
}
