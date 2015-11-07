// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calculate_document_frequency
arma::vec calculate_document_frequency(arma::mat document_word_matrix);
RcppExport SEXP SpeedReader_calculate_document_frequency(SEXP document_word_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type document_word_matrix(document_word_matrixSEXP);
    __result = Rcpp::wrap(calculate_document_frequency(document_word_matrix));
    return __result;
END_RCPP
}
// Calculate_TFIDF
List Calculate_TFIDF(arma::mat document_word_matrix);
RcppExport SEXP SpeedReader_Calculate_TFIDF(SEXP document_word_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type document_word_matrix(document_word_matrixSEXP);
    __result = Rcpp::wrap(Calculate_TFIDF(document_word_matrix));
    return __result;
END_RCPP
}
// Col_and_Row_Sums
List Col_and_Row_Sums(arma::mat joint_dist);
RcppExport SEXP SpeedReader_Col_and_Row_Sums(SEXP joint_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type joint_dist(joint_distSEXP);
    __result = Rcpp::wrap(Col_and_Row_Sums(joint_dist));
    return __result;
END_RCPP
}
// Combine_Document_Term_Matrices
List Combine_Document_Term_Matrices(List document_word_matrix_list, List vocabularies, std::vector<std::string> unique_words, int number_of_corpora);
RcppExport SEXP SpeedReader_Combine_Document_Term_Matrices(SEXP document_word_matrix_listSEXP, SEXP vocabulariesSEXP, SEXP unique_wordsSEXP, SEXP number_of_corporaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type document_word_matrix_list(document_word_matrix_listSEXP);
    Rcpp::traits::input_parameter< List >::type vocabularies(vocabulariesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type unique_words(unique_wordsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_corpora(number_of_corporaSEXP);
    __result = Rcpp::wrap(Combine_Document_Term_Matrices(document_word_matrix_list, vocabularies, unique_words, number_of_corpora));
    return __result;
END_RCPP
}
// Count_Words
List Count_Words(int number_of_documents, List Document_Words, arma::vec Document_Lengths, int max_vocab_size, int add_to_vocabulary, arma::vec existing_word_counts, std::vector<std::string> existing_vocabulary, int existing_vocabulary_size, int using_wordcounts, List Document_Word_Counts, int print_counter);
RcppExport SEXP SpeedReader_Count_Words(SEXP number_of_documentsSEXP, SEXP Document_WordsSEXP, SEXP Document_LengthsSEXP, SEXP max_vocab_sizeSEXP, SEXP add_to_vocabularySEXP, SEXP existing_word_countsSEXP, SEXP existing_vocabularySEXP, SEXP existing_vocabulary_sizeSEXP, SEXP using_wordcountsSEXP, SEXP Document_Word_CountsSEXP, SEXP print_counterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type number_of_documents(number_of_documentsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Words(Document_WordsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Document_Lengths(Document_LengthsSEXP);
    Rcpp::traits::input_parameter< int >::type max_vocab_size(max_vocab_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type add_to_vocabulary(add_to_vocabularySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type existing_word_counts(existing_word_countsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type existing_vocabulary(existing_vocabularySEXP);
    Rcpp::traits::input_parameter< int >::type existing_vocabulary_size(existing_vocabulary_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type using_wordcounts(using_wordcountsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Word_Counts(Document_Word_CountsSEXP);
    Rcpp::traits::input_parameter< int >::type print_counter(print_counterSEXP);
    __result = Rcpp::wrap(Count_Words(number_of_documents, Document_Words, Document_Lengths, max_vocab_size, add_to_vocabulary, existing_word_counts, existing_vocabulary, existing_vocabulary_size, using_wordcounts, Document_Word_Counts, print_counter));
    return __result;
END_RCPP
}
// Fast_Mutual_Information
double Fast_Mutual_Information(arma::mat joint_dist, arma::vec non_zero_cols);
RcppExport SEXP SpeedReader_Fast_Mutual_Information(SEXP joint_distSEXP, SEXP non_zero_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type joint_dist(joint_distSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type non_zero_cols(non_zero_colsSEXP);
    __result = Rcpp::wrap(Fast_Mutual_Information(joint_dist, non_zero_cols));
    return __result;
END_RCPP
}
// Generate_Document_Term_Matrix
arma::mat Generate_Document_Term_Matrix(int number_of_documents, int number_of_unique_words, std::vector<std::string> unique_words, List Document_Words, arma::vec Document_Lengths, int using_wordcounts, List Document_Word_Counts);
RcppExport SEXP SpeedReader_Generate_Document_Term_Matrix(SEXP number_of_documentsSEXP, SEXP number_of_unique_wordsSEXP, SEXP unique_wordsSEXP, SEXP Document_WordsSEXP, SEXP Document_LengthsSEXP, SEXP using_wordcountsSEXP, SEXP Document_Word_CountsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type number_of_documents(number_of_documentsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_unique_words(number_of_unique_wordsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type unique_words(unique_wordsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Words(Document_WordsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Document_Lengths(Document_LengthsSEXP);
    Rcpp::traits::input_parameter< int >::type using_wordcounts(using_wordcountsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Word_Counts(Document_Word_CountsSEXP);
    __result = Rcpp::wrap(Generate_Document_Term_Matrix(number_of_documents, number_of_unique_words, unique_words, Document_Words, Document_Lengths, using_wordcounts, Document_Word_Counts));
    return __result;
END_RCPP
}
// Generate_Sparse_Document_Term_Matrix_Stem_Vocabulary
List Generate_Sparse_Document_Term_Matrix_Stem_Vocabulary(int number_of_documents, int number_of_unique_words, std::vector<std::string> unique_words, List Document_Words, arma::vec Document_Lengths, List Document_Word_Counts, int total_terms, std::vector<std::string> stem_lookup, arma::vec starts, arma::vec ends, int lookup_size);
RcppExport SEXP SpeedReader_Generate_Sparse_Document_Term_Matrix_Stem_Vocabulary(SEXP number_of_documentsSEXP, SEXP number_of_unique_wordsSEXP, SEXP unique_wordsSEXP, SEXP Document_WordsSEXP, SEXP Document_LengthsSEXP, SEXP Document_Word_CountsSEXP, SEXP total_termsSEXP, SEXP stem_lookupSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP lookup_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type number_of_documents(number_of_documentsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_unique_words(number_of_unique_wordsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type unique_words(unique_wordsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Words(Document_WordsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Document_Lengths(Document_LengthsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Word_Counts(Document_Word_CountsSEXP);
    Rcpp::traits::input_parameter< int >::type total_terms(total_termsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type stem_lookup(stem_lookupSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< int >::type lookup_size(lookup_sizeSEXP);
    __result = Rcpp::wrap(Generate_Sparse_Document_Term_Matrix_Stem_Vocabulary(number_of_documents, number_of_unique_words, unique_words, Document_Words, Document_Lengths, Document_Word_Counts, total_terms, stem_lookup, starts, ends, lookup_size));
    return __result;
END_RCPP
}
// Generate_Sparse_Document_Term_Matrix
List Generate_Sparse_Document_Term_Matrix(int number_of_documents, int number_of_unique_words, std::vector<std::string> unique_words, List Document_Words, arma::vec Document_Lengths, List Document_Word_Counts, int total_terms);
RcppExport SEXP SpeedReader_Generate_Sparse_Document_Term_Matrix(SEXP number_of_documentsSEXP, SEXP number_of_unique_wordsSEXP, SEXP unique_wordsSEXP, SEXP Document_WordsSEXP, SEXP Document_LengthsSEXP, SEXP Document_Word_CountsSEXP, SEXP total_termsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type number_of_documents(number_of_documentsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_unique_words(number_of_unique_wordsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type unique_words(unique_wordsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Words(Document_WordsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Document_Lengths(Document_LengthsSEXP);
    Rcpp::traits::input_parameter< List >::type Document_Word_Counts(Document_Word_CountsSEXP);
    Rcpp::traits::input_parameter< int >::type total_terms(total_termsSEXP);
    __result = Rcpp::wrap(Generate_Sparse_Document_Term_Matrix(number_of_documents, number_of_unique_words, unique_words, Document_Words, Document_Lengths, Document_Word_Counts, total_terms));
    return __result;
END_RCPP
}
// Mutual_Information
double Mutual_Information(arma::mat joint_dist);
RcppExport SEXP SpeedReader_Mutual_Information(SEXP joint_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type joint_dist(joint_distSEXP);
    __result = Rcpp::wrap(Mutual_Information(joint_dist));
    return __result;
END_RCPP
}
