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
	markov_chain.parseText("test_doc.txt");
	markov_chain.generateTweet();

	return 0;
}
