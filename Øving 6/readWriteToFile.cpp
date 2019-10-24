#include "std_lib_facilities.h"
#include "readWriteToFile.h"

void writeToFile() {
	int n = 1;
	string word;
	string text;
	ofstream myfile("text.txt");
	cout << "Skriv inn: ";

	while (n > 0) {
		cin >> word;
		text = text + word;
		if (word == "quit") {
			word.clear();
			n = 0;
		}
		myfile << word << '\n';
		word.clear();
	}
}

void readFromFile() {
	ifstream infile("text.txt");
	if (!infile) {
		cout << "Fant ikke fil.";
		exit(1);
	}
	if (infile.is_open()) {
		string line;
		int l = 1;
		ofstream newfile("newtext.txt");
		while (getline(infile, line)) {
			//printf("%s", line.c_str());
			newfile << l << " " << line << '\n';
			++l;
		}
	}
}