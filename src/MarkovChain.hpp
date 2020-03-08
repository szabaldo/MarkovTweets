/*
 * TextAnalyzer.hpp
 *
 *  Created on: Mar 7, 2020
 *      Author: sam
 */

#ifndef MARKOVCHAIN_HPP_
#define MARKOVCHAIN_HPP_

#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class MarkovChain {

	fstream* key_stream;
	fstream* value_stream;
	map<string, string>* markov_map;

public:
	MarkovChain();
	void parse_text(string file);
private:
	void print_map();
};



#endif /* MARKOVCHAIN_HPP_ */
