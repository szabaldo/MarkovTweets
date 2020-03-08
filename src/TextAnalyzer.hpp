/*
 * TextAnalyzer.hpp
 *
 *  Created on: Mar 7, 2020
 *      Author: sam
 */

#ifndef TEXTANALYZER_HPP_
#define TEXTANALYZER_HPP_

#include <fstream>
#include <iostream>

using namespace std;

class TextAnalyzer {

	fstream* file_in_stream;

public:
	TextAnalyzer();
	void parse_text(string file);
};



#endif /* TEXTANALYZER_HPP_ */
