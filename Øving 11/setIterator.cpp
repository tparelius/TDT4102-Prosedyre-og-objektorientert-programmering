#include "setIterator.h"


void setIter(std::set<std::string> set1) {
	std::set<string>::iterator it;
	for (it = set1.begin(); it != set1.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';
}

void setRevIter(std::set<std::string> set1) {
	std::set<string>::reverse_iterator it;
	for (it = set1.rbegin(); it != set1.rend(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';
}

void setReplace(std::set<std::string>& set2, std::string old, std::string repl) {

	std::set<string>::iterator it;
	set2.erase(std::find(set2.begin(), set2.end(), old));
	set2.insert(set2.begin(), repl);
	for (it = set2.begin(); it != set2.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';
	
}