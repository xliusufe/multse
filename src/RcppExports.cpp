// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Estimation
List Estimation(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, List optsList);
RcppExport SEXP _comarm_Estimation(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP optsListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    rcpp_result_gen = Rcpp::wrap(Estimation(Y, Z0, Sinit, Ainit, Binit, Cinit, optsList));
    return rcpp_result_gen;
END_RCPP
}
// setuplambda
Eigen::VectorXd setuplambda(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, int nx, int ng, int nlam, Eigen::VectorXd setlam);
RcppExport SEXP _comarm_setuplambda(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP nxSEXP, SEXP ngSEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< int >::type nx(nxSEXP);
    Rcpp::traits::input_parameter< int >::type ng(ngSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambda(Y, Z0, Sinit, Ainit, Binit, Cinit, nx, ng, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumn
List EstPenColumn(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumn(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumn(Y, Z0, Sinit, Ainit, Binit, Cinit, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnCV
List EstPenColumnCV(Eigen::MatrixXd Y, List Z0, Eigen::MatrixXd Ytest, List Ztest0, List Sinit, List Ainit, List Binit, List Cinit, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnCV(SEXP YSEXP, SEXP Z0SEXP, SEXP YtestSEXP, SEXP Ztest0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< List >::type Ztest0(Ztest0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnCV(Y, Z0, Ytest, Ztest0, Sinit, Ainit, Binit, Cinit, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstimationT4
List EstimationT4(Eigen::MatrixXd Y, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, List optsList);
RcppExport SEXP _comarm_EstimationT4(SEXP YSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP optsListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    rcpp_result_gen = Rcpp::wrap(EstimationT4(Y, Z, S, A, B, C, D, optsList));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaT4
Eigen::VectorXd setuplambdaT4(Eigen::MatrixXd Y, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, int nlam, Eigen::VectorXd setlam);
RcppExport SEXP _comarm_setuplambdaT4(SEXP YSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaT4(Y, Z, S, A, B, C, D, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnT4
List EstPenColumnT4(Eigen::MatrixXd Y, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnT4(SEXP YSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnT4(Y, Z, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnT4CV
List EstPenColumnT4CV(Eigen::MatrixXd Y, Eigen::MatrixXd Z, Eigen::MatrixXd Ytest, Eigen::MatrixXd Ztest, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnT4CV(SEXP YSEXP, SEXP ZSEXP, SEXP YtestSEXP, SEXP ZtestSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ztest(ZtestSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnT4CV(Y, Z, Ytest, Ztest, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaV
List setuplambdaV(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, int nx1, int ng1, int nlam, Eigen::VectorXd setlam);
RcppExport SEXP _comarm_setuplambdaV(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP nx1SEXP, SEXP ng1SEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type nx1(nx1SEXP);
    Rcpp::traits::input_parameter< int >::type ng1(ng1SEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaV(Y, Z0, Sinit, Ainit, Binit, Cinit, Z, S, A, B, C, D, nx1, ng1, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnComposed1
List EstPenColumnComposed1(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnComposed1(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnComposed1(Y, Z0, Sinit, Ainit, Binit, Cinit, Z, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnComposed2
List EstPenColumnComposed2(Eigen::MatrixXd Y, List Z0, List Sinit, List Ainit, List Binit, List Cinit, Eigen::MatrixXd Z, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnComposed2(SEXP YSEXP, SEXP Z0SEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP ZSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnComposed2(Y, Z0, Sinit, Ainit, Binit, Cinit, Z, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnComposed1CV
List EstPenColumnComposed1CV(Eigen::MatrixXd Y, List Z0, Eigen::MatrixXd Z, Eigen::MatrixXd Ytest, List Ztest0, Eigen::MatrixXd Ztest, List Sinit, List Ainit, List Binit, List Cinit, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnComposed1CV(SEXP YSEXP, SEXP Z0SEXP, SEXP ZSEXP, SEXP YtestSEXP, SEXP Ztest0SEXP, SEXP ZtestSEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< List >::type Ztest0(Ztest0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ztest(ZtestSEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnComposed1CV(Y, Z0, Z, Ytest, Ztest0, Ztest, Sinit, Ainit, Binit, Cinit, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnComposed2CV
List EstPenColumnComposed2CV(Eigen::MatrixXd Y, List Z0, Eigen::MatrixXd Z, Eigen::MatrixXd Ytest, List Ztest0, Eigen::MatrixXd Ztest, List Sinit, List Ainit, List Binit, List Cinit, Eigen::MatrixXd S, Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd D, Eigen::VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _comarm_EstPenColumnComposed2CV(SEXP YSEXP, SEXP Z0SEXP, SEXP ZSEXP, SEXP YtestSEXP, SEXP Ztest0SEXP, SEXP ZtestSEXP, SEXP SinitSEXP, SEXP AinitSEXP, SEXP BinitSEXP, SEXP CinitSEXP, SEXP SSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP DSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type Z0(Z0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< List >::type Ztest0(Ztest0SEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Ztest(ZtestSEXP);
    Rcpp::traits::input_parameter< List >::type Sinit(SinitSEXP);
    Rcpp::traits::input_parameter< List >::type Ainit(AinitSEXP);
    Rcpp::traits::input_parameter< List >::type Binit(BinitSEXP);
    Rcpp::traits::input_parameter< List >::type Cinit(CinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type D(DSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnComposed2CV(Y, Z0, Z, Ytest, Ztest0, Ztest, Sinit, Ainit, Binit, Cinit, S, A, B, C, D, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// TransferModalUnfoldingsT
Eigen::MatrixXd TransferModalUnfoldingsT(Eigen::MatrixXd S, int d1, int d2, Eigen::VectorXi dim);
RcppExport SEXP _comarm_TransferModalUnfoldingsT(SEXP SSEXP, SEXP d1SEXP, SEXP d2SEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< int >::type d2(d2SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(TransferModalUnfoldingsT(S, d1, d2, dim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_comarm_Estimation", (DL_FUNC) &_comarm_Estimation, 7},
    {"_comarm_setuplambda", (DL_FUNC) &_comarm_setuplambda, 10},
    {"_comarm_EstPenColumn", (DL_FUNC) &_comarm_EstPenColumn, 9},
    {"_comarm_EstPenColumnCV", (DL_FUNC) &_comarm_EstPenColumnCV, 11},
    {"_comarm_EstimationT4", (DL_FUNC) &_comarm_EstimationT4, 8},
    {"_comarm_setuplambdaT4", (DL_FUNC) &_comarm_setuplambdaT4, 9},
    {"_comarm_EstPenColumnT4", (DL_FUNC) &_comarm_EstPenColumnT4, 10},
    {"_comarm_EstPenColumnT4CV", (DL_FUNC) &_comarm_EstPenColumnT4CV, 12},
    {"_comarm_setuplambdaV", (DL_FUNC) &_comarm_setuplambdaV, 16},
    {"_comarm_EstPenColumnComposed1", (DL_FUNC) &_comarm_EstPenColumnComposed1, 15},
    {"_comarm_EstPenColumnComposed2", (DL_FUNC) &_comarm_EstPenColumnComposed2, 15},
    {"_comarm_EstPenColumnComposed1CV", (DL_FUNC) &_comarm_EstPenColumnComposed1CV, 18},
    {"_comarm_EstPenColumnComposed2CV", (DL_FUNC) &_comarm_EstPenColumnComposed2CV, 18},
    {"_comarm_TransferModalUnfoldingsT", (DL_FUNC) &_comarm_TransferModalUnfoldingsT, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_comarm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
