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
#include <vector>

using namespace std;

class MarkovChain {
	fstream* key_stream;
	fstream* value_stream;
	map<string, vector<string>>* markov_map;
	vector<string>* key_vec;
public:
	MarkovChain();
	~MarkovChain();
	void parseText(string file);
	string generateTweet();
private:
	void printMap();
};



#endif /* MARKOVCHAIN_HPP_ */
