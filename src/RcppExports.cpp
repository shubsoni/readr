// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// collectorGuess
std::string collectorGuess(CharacterVector input, List locale_);
RcppExport SEXP _readr_collectorGuess(SEXP inputSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    rcpp_result_gen = Rcpp::wrap(collectorGuess(input, locale_));
    return rcpp_result_gen;
END_RCPP
}
// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP _readr_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(read_connection_(con, chunk_size));
    return rcpp_result_gen;
END_RCPP
}
// utctime
NumericVector utctime(IntegerVector year, IntegerVector month, IntegerVector day, IntegerVector hour, IntegerVector min, IntegerVector sec, NumericVector psec);
RcppExport SEXP _readr_utctime(SEXP yearSEXP, SEXP monthSEXP, SEXP daySEXP, SEXP hourSEXP, SEXP minSEXP, SEXP secSEXP, SEXP psecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type year(yearSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type month(monthSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type day(daySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type hour(hourSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sec(secSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type psec(psecSEXP);
    rcpp_result_gen = Rcpp::wrap(utctime(year, month, day, hour, min, sec, psec));
    return rcpp_result_gen;
END_RCPP
}
// dim_tokens_
IntegerVector dim_tokens_(List sourceSpec, List tokenizerSpec);
RcppExport SEXP _readr_dim_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    rcpp_result_gen = Rcpp::wrap(dim_tokens_(sourceSpec, tokenizerSpec));
    return rcpp_result_gen;
END_RCPP
}
// count_fields_
std::vector<int> count_fields_(List sourceSpec, List tokenizerSpec, int n_max);
RcppExport SEXP _readr_count_fields_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(count_fields_(sourceSpec, tokenizerSpec, n_max));
    return rcpp_result_gen;
END_RCPP
}
// guess_header_
RObject guess_header_(List sourceSpec, List tokenizerSpec, List locale_);
RcppExport SEXP _readr_guess_header_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    rcpp_result_gen = Rcpp::wrap(guess_header_(sourceSpec, tokenizerSpec, locale_));
    return rcpp_result_gen;
END_RCPP
}
// tokenize_
RObject tokenize_(List sourceSpec, List tokenizerSpec, int n_max);
RcppExport SEXP _readr_tokenize_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP n_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(tokenize_(sourceSpec, tokenizerSpec, n_max));
    return rcpp_result_gen;
END_RCPP
}
// parse_vector_
SEXP parse_vector_(CharacterVector x, List collectorSpec, List locale_, const std::vector<std::string>& na);
RcppExport SEXP _readr_parse_vector_(SEXP xSEXP, SEXP collectorSpecSEXP, SEXP locale_SEXP, SEXP naSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type collectorSpec(collectorSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_vector_(x, collectorSpec, locale_, na));
    return rcpp_result_gen;
END_RCPP
}
// read_file_
CharacterVector read_file_(List sourceSpec, List locale_);
RcppExport SEXP _readr_read_file_(SEXP sourceSpecSEXP, SEXP locale_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    rcpp_result_gen = Rcpp::wrap(read_file_(sourceSpec, locale_));
    return rcpp_result_gen;
END_RCPP
}
// read_file_raw_
RawVector read_file_raw_(List sourceSpec);
RcppExport SEXP _readr_read_file_raw_(SEXP sourceSpecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    rcpp_result_gen = Rcpp::wrap(read_file_raw_(sourceSpec));
    return rcpp_result_gen;
END_RCPP
}
// read_lines_
CharacterVector read_lines_(List sourceSpec, List locale_, std::vector<std::string> na, int n_max, bool progress);
RcppExport SEXP _readr_read_lines_(SEXP sourceSpecSEXP, SEXP locale_SEXP, SEXP naSEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(read_lines_(sourceSpec, locale_, na, n_max, progress));
    return rcpp_result_gen;
END_RCPP
}
// read_lines_chunked_
void read_lines_chunked_(List sourceSpec, List locale_, std::vector<std::string> na, int chunkSize, Environment callback, bool progress);
RcppExport SEXP _readr_read_lines_chunked_(SEXP sourceSpecSEXP, SEXP locale_SEXP, SEXP naSEXP, SEXP chunkSizeSEXP, SEXP callbackSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type na(naSEXP);
    Rcpp::traits::input_parameter< int >::type chunkSize(chunkSizeSEXP);
    Rcpp::traits::input_parameter< Environment >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    read_lines_chunked_(sourceSpec, locale_, na, chunkSize, callback, progress);
    return R_NilValue;
END_RCPP
}
// read_lines_raw_
List read_lines_raw_(List sourceSpec, int n_max, bool progress);
RcppExport SEXP _readr_read_lines_raw_(SEXP sourceSpecSEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(read_lines_raw_(sourceSpec, n_max, progress));
    return rcpp_result_gen;
END_RCPP
}
// read_tokens_
RObject read_tokens_(List sourceSpec, List tokenizerSpec, ListOf<List> colSpecs, CharacterVector colNames, List locale_, int n_max, bool progress);
RcppExport SEXP _readr_read_tokens_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP colSpecsSEXP, SEXP colNamesSEXP, SEXP locale_SEXP, SEXP n_maxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type colSpecs(colSpecsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(read_tokens_(sourceSpec, tokenizerSpec, colSpecs, colNames, locale_, n_max, progress));
    return rcpp_result_gen;
END_RCPP
}
// read_tokens_chunked_
void read_tokens_chunked_(List sourceSpec, Environment callback, int chunkSize, List tokenizerSpec, ListOf<List> colSpecs, CharacterVector colNames, List locale_, bool progress);
RcppExport SEXP _readr_read_tokens_chunked_(SEXP sourceSpecSEXP, SEXP callbackSEXP, SEXP chunkSizeSEXP, SEXP tokenizerSpecSEXP, SEXP colSpecsSEXP, SEXP colNamesSEXP, SEXP locale_SEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< Environment >::type callback(callbackSEXP);
    Rcpp::traits::input_parameter< int >::type chunkSize(chunkSizeSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< ListOf<List> >::type colSpecs(colSpecsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type colNames(colNamesSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    read_tokens_chunked_(sourceSpec, callback, chunkSize, tokenizerSpec, colSpecs, colNames, locale_, progress);
    return R_NilValue;
END_RCPP
}
// guess_types_
std::vector<std::string> guess_types_(List sourceSpec, List tokenizerSpec, Rcpp::List locale_, int n);
RcppExport SEXP _readr_guess_types_(SEXP sourceSpecSEXP, SEXP tokenizerSpecSEXP, SEXP locale_SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< List >::type tokenizerSpec(tokenizerSpecSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(guess_types_(sourceSpec, tokenizerSpec, locale_, n));
    return rcpp_result_gen;
END_RCPP
}
// whitespaceColumns
List whitespaceColumns(List sourceSpec, int n, std::string comment);
RcppExport SEXP _readr_whitespaceColumns(SEXP sourceSpecSEXP, SEXP nSEXP, SEXP commentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type sourceSpec(sourceSpecSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type comment(commentSEXP);
    rcpp_result_gen = Rcpp::wrap(whitespaceColumns(sourceSpec, n, comment));
    return rcpp_result_gen;
END_RCPP
}
// type_convert_col
RObject type_convert_col(CharacterVector x, List spec, List locale_, int col, const std::vector<std::string>& na, bool trim_ws);
RcppExport SEXP _readr_type_convert_col(SEXP xSEXP, SEXP specSEXP, SEXP locale_SEXP, SEXP colSEXP, SEXP naSEXP, SEXP trim_wsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type spec(specSEXP);
    Rcpp::traits::input_parameter< List >::type locale_(locale_SEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    rcpp_result_gen = Rcpp::wrap(type_convert_col(x, spec, locale_, col, na, trim_ws));
    return rcpp_result_gen;
END_RCPP
}
// stream_delim_
std::string stream_delim_(const List& df, RObject connection, char delim, const std::string& na, bool col_names, bool bom);
RcppExport SEXP _readr_stream_delim_(SEXP dfSEXP, SEXP connectionSEXP, SEXP delimSEXP, SEXP naSEXP, SEXP col_namesSEXP, SEXP bomSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type df(dfSEXP);
    Rcpp::traits::input_parameter< RObject >::type connection(connectionSEXP);
    Rcpp::traits::input_parameter< char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type na(naSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type bom(bomSEXP);
    rcpp_result_gen = Rcpp::wrap(stream_delim_(df, connection, delim, na, col_names, bom));
    return rcpp_result_gen;
END_RCPP
}
// write_lines_
void write_lines_(const CharacterVector& lines, RObject connection, const std::string& na, const std::string& sep);
RcppExport SEXP _readr_write_lines_(SEXP linesSEXP, SEXP connectionSEXP, SEXP naSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type lines(linesSEXP);
    Rcpp::traits::input_parameter< RObject >::type connection(connectionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type na(naSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type sep(sepSEXP);
    write_lines_(lines, connection, na, sep);
    return R_NilValue;
END_RCPP
}
// write_lines_raw_
void write_lines_raw_(List x, RObject connection, const std::string& sep);
RcppExport SEXP _readr_write_lines_raw_(SEXP xSEXP, SEXP connectionSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type connection(connectionSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type sep(sepSEXP);
    write_lines_raw_(x, connection, sep);
    return R_NilValue;
END_RCPP
}
// write_file_
void write_file_(std::string x, RObject connection);
RcppExport SEXP _readr_write_file_(SEXP xSEXP, SEXP connectionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type connection(connectionSEXP);
    write_file_(x, connection);
    return R_NilValue;
END_RCPP
}
// write_file_raw_
void write_file_raw_(RawVector x, RObject connection);
RcppExport SEXP _readr_write_file_raw_(SEXP xSEXP, SEXP connectionSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< RObject >::type connection(connectionSEXP);
    write_file_raw_(x, connection);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_readr_collectorGuess", (DL_FUNC) &_readr_collectorGuess, 2},
    {"_readr_read_connection_", (DL_FUNC) &_readr_read_connection_, 2},
    {"_readr_utctime", (DL_FUNC) &_readr_utctime, 7},
    {"_readr_dim_tokens_", (DL_FUNC) &_readr_dim_tokens_, 2},
    {"_readr_count_fields_", (DL_FUNC) &_readr_count_fields_, 3},
    {"_readr_guess_header_", (DL_FUNC) &_readr_guess_header_, 3},
    {"_readr_tokenize_", (DL_FUNC) &_readr_tokenize_, 3},
    {"_readr_parse_vector_", (DL_FUNC) &_readr_parse_vector_, 4},
    {"_readr_read_file_", (DL_FUNC) &_readr_read_file_, 2},
    {"_readr_read_file_raw_", (DL_FUNC) &_readr_read_file_raw_, 1},
    {"_readr_read_lines_", (DL_FUNC) &_readr_read_lines_, 5},
    {"_readr_read_lines_chunked_", (DL_FUNC) &_readr_read_lines_chunked_, 6},
    {"_readr_read_lines_raw_", (DL_FUNC) &_readr_read_lines_raw_, 3},
    {"_readr_read_tokens_", (DL_FUNC) &_readr_read_tokens_, 7},
    {"_readr_read_tokens_chunked_", (DL_FUNC) &_readr_read_tokens_chunked_, 8},
    {"_readr_guess_types_", (DL_FUNC) &_readr_guess_types_, 4},
    {"_readr_whitespaceColumns", (DL_FUNC) &_readr_whitespaceColumns, 3},
    {"_readr_type_convert_col", (DL_FUNC) &_readr_type_convert_col, 6},
    {"_readr_stream_delim_", (DL_FUNC) &_readr_stream_delim_, 6},
    {"_readr_write_lines_", (DL_FUNC) &_readr_write_lines_, 4},
    {"_readr_write_lines_raw_", (DL_FUNC) &_readr_write_lines_raw_, 3},
    {"_readr_write_file_", (DL_FUNC) &_readr_write_file_, 2},
    {"_readr_write_file_raw_", (DL_FUNC) &_readr_write_file_raw_, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_readr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
