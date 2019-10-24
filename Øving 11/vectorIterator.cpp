#include "vectorIterator.h"


void iter(std::vector<std::string> vect) {
	std::vector<string>::iterator it;
	std::cout << "Oppgave 1a: " << '\n';
	for (it = vect.begin(); it != vect.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';
}
void reviter(std::vector<std::string> vect) {
	std::vector<string>::reverse_iterator it;
	std::cout << "Oppgave 1b: " << '\n';
	for (it = vect.rbegin(); it != vect.rend(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';

}
void replace(std::vector<std::string>& vect, std::string old, std::string repl) {
	std::vector<string>::iterator it;
	std::vector<string>::iterator it1;
	std::vector<string>::iterator it2;
	std::cout << "Oppgave 1c: " << '\n';
	//vect.erase(std::remove(vect.begin(), vect.end(), old), vect.end());
	//for (it = vect.begin(); it != vect.end(); ++it) {
	//
	//}

	it = vect.begin();
	while (it != vect.end()) {
		it1 = std::find(it, vect.end(), old);
		it2 = vect.insert(it1, repl);
		vect.erase(it2 + 1);
		it = it2+1;
	}
	//vect.insert(std::find(vect.begin(),vect.end(),old), repl);

	//std::vector<string>::iterator pend;
	//pend = std::remove(vect.begin(), vect.end(), old);
	//vect.erase(std::remove(vect.begin(), vect.end(), old), vect.end());
	//for (it = vect.begin(); it != vect.end(); ++it) {
		//if (*it == old) {
			//vect.erase(std::remove(vect.begin(), vect.end(), old), vect.end());
			//vect.insert(*it, repl);
			//vect.erase(it);
			//vect.insert(it,repl);

			//*it = repl;
			//std::replace(vect.begin(),vect.end(),old,repl);
		//}

	//}
	for (it = vect.begin(); it != vect.end(); ++it) {
		std::cout << *it << std::endl;
	}
	std::cout << '\n';
}