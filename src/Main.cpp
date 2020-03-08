//============================================================================
// Name        : MarkovTweets.cpp
// Author      : Sam Zabaldo
// Version     :
// Copyright   : Your copyright notice
// Description : Generate a tweet in the style of input text.
//============================================================================

#include <iostream>

#include "MarkovChain.hpp"
using namespace std;

int main() {
	MarkovChain markov_chain;
	markov_chain.parse_text("test_doc.txt");

	return 0;
}
