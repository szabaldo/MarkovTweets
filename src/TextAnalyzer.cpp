/*
 * TextAnalyzer.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: sam
 */
#include "TextAnalyzer.hpp"
#include <fstream>

TextAnalyzer::TextAnalyzer() {
	file_in_stream = new fstream();
}

void TextAnalyzer::parse_text(string file) {
	file_in_stream->open(file);
	if (!*file_in_stream) {
		cout << "failed to open file: " << file << endl;
	}

	string s;

	while (*file_in_stream >> s) {
		cout << s << endl;
	}
}



