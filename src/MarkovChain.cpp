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
	markov_map = new map<string, vector<string>>();
	key_vec = new vector<string>();
}

MarkovChain::~MarkovChain() {
	delete markov_map;
	delete key_vec;
}

void MarkovChain::parseText(string file) {
	key_stream->open(file);
	value_stream->open(file);
	if (!*key_stream || !*value_stream) {
		cout << "failed to open file: " << file << endl;
		key_stream->close();
		value_stream->close();
		delete key_stream;
		delete value_stream;
		delete markov_map;
		delete key_vec;
		exit(1);
	}

	if (key_stream->peek() == EOF) {
		cout << "file is empty" << endl;
		key_stream->close();
		value_stream->close();
		delete key_stream;
		delete value_stream;
		delete markov_map;
		delete key_vec;
		exit(2);
	}

	string key;
	*key_stream >> key;
	string value;
	*value_stream >> value;

	while (*value_stream >> value) {
		(*markov_map)[key].push_back(value);
		*key_stream >> key;
		key_vec->push_back(key);
	}

	if (key_vec->size() <= 1) {
		cout << "file must be at least 3 words long" << endl;
		key_stream->close();
		value_stream->close();
		delete key_stream;
		delete value_stream;
		delete markov_map;
		delete key_vec;
		exit(3);
	}

	key_vec->pop_back();

	key_stream->close();
	value_stream->close();
	delete key_stream;
	delete value_stream;
}

string MarkovChain::generateTweet() {
	string tweet = "";
	string value = "";
	string key = (*key_vec)[rand() % key_vec->size()];
	int character_count = 0;
	bool loop_flag = true;

	while (loop_flag) {
		character_count = tweet.length();
		if (markov_map->find(key) != markov_map->end()) {
			value = (*markov_map)[key][rand() % (*markov_map)[key].size()];
		} else {
			break;
		}
		if (character_count + value.length() < 280) {
			tweet = tweet + " " + key;
		} else {
			loop_flag = false;
		}
		key = value;
	}

	cout << tweet << endl;
	return tweet;
}

void MarkovChain::printMap() {
	for (auto const& pair: *markov_map) {
		cout << "{" << pair.first << ": ";
		for (int i = 0; i < pair.second.size(); i ++) {
			cout << pair.second[i] << ", ";
		}
		cout << "}" << endl;
	}
}



