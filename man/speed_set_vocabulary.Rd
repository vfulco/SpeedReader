% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/speed_set_vocabulary.R
\name{speed_set_vocabulary}
\alias{speed_set_vocabulary}
\title{A function the reorgaizes vocabulary to speed up document term matrix formation using a string stem dictionary.}
\usage{
speed_set_vocabulary(vocab, term_frequency_threshold = 0, cores = 1)
}
\arguments{
\item{vocab}{A vocabulary list object returned by the count_words() function.}

\item{term_frequency_threshold}{A threshold below which all words appearing fewer than that many times in the corpus will be removed. Defaults to 0 in which case no words will be removed.}

\item{cores}{The number of cores we wish to use for parallelization to speed up computation. Defaults to 1.}
}
\value{
A vocabulary list object.
}
\description{
A function the reorgaizes vocabulary to speed up document term matrix formation using a string stem dictionary.
}
