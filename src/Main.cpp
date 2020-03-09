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
	srand(time(NULL));
	MarkovChain markov_chain;
	cout << "enter file path for source text: ";
	string file;
	cin >> file;
	markov_chain.parseText(file);
	markov_chain.generateTweet();

	return 0;
}
