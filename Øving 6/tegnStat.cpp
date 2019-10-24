#include "std_lib_facilities.h"
#include "tegnStat.h"
locale loc;


int returnLines()
{
	string s;
	int linesTotal = 0;
	ifstream grunnlov("grunnlov.txt");
	while (!grunnlov.eof()) {
		getline(grunnlov, s);
		++linesTotal;
	}
	return linesTotal;
}

void readText()
{
	vector<int> charCount(26,0);
	int ctr = 0;
	int p = 0;
	char letter;
	string line;
	ifstream grunnlov("grunnlov.txt");
	if (!grunnlov) {
		cout << "Fant ikke fil.";
		exit(1);
	}
	if (grunnlov.is_open()) {		
		while (p < returnLines()) {
			getline(grunnlov, line);
			for (int i = 0; i < line.size(); ++i) {
				if (isalpha(line[i], loc) && (line[i]-'a')<27) {
					letter = tolower(line[i]);
					charCount[letter - 'a'] += 1;
				}
			}
			++p;
		}
	}grunnlov.close();
	string alphabet = ("abcdefghijklmnopqrstuvqxyz");
	for (int i = 0; i < charCount.size(); i++) {
		cout << alphabet[i] << ": ";
		cout << charCount[i] << '\n';
	}
}