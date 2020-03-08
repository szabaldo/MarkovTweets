//============================================================================
// Name        : MarkovTweets.cpp
// Author      : Sam Zabaldo
// Version     :
// Copyright   : Your copyright notice
// Description : Generate a tweet in the style of input text.
//============================================================================

#include <iostream>
#include "TextAnalyzer.hpp"
using namespace std;

int main() {
	TextAnalyzer text_analyzer;
	text_analyzer.parse_text("test_doc.txt");


	return 0;
}
