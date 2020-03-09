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
	// seed random number generator
	srand(time(NULL));

	// prompt and recieve file path for source text
	cout << "enter file path for source text: ";
	string file;
	cin >> file;

	// analyzer source text and generate tweet
	MarkovChain markov_chain;
	markov_chain.parseText(file);
	markov_chain.generateTweet();

	return 0;
}
