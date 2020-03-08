/*
 * TextAnalyzer.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: sam
 */
#include "MarkovChain.hpp"

MarkovChain::MarkovChain() {
	key_stream = new fstream();
	value_stream = new fstream();
	markov_map = new map<string, string>();
}

void MarkovChain::parse_text(string file) {
	key_stream->open(file);
	value_stream->open(file);
	if (!*key_stream || !*value_stream) {
		cout << "failed to open file: " << file << endl;
	}

	string key;
	string value;
	*value_stream >> value;
	while (*key_stream >> key) {
		*value_stream >> value;
		markov_map->insert(pair<string, string>(key, value));
	}

	print_map();


}

void MarkovChain::print_map() {
	for (auto const& pair: *markov_map) {
		cout << "{" << pair.first << ": " << pair.second << "}" << endl;
	}
}



