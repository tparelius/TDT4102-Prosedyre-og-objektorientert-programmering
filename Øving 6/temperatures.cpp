#include "temperatures.h"
#include "std_lib_facilities.h"



istream & operator>>(istream & is, Temps & t)
{
	string word1;
	string word2;
	is >> word1;
	is >> word2;
	t.max = stof(word1);
	t.min = stof(word2);
	return is;
}

ostream & operator<<(ostream & ut, const Temps & t)
{
	ut << t.max << '\t';
	ut << t.min << '\n';
	return ut;
}


int Temps::numberLines()
{
	string s;
	int linesTotal = 0;
	ifstream is("temperatures.txt");
	while (!is.eof()) {
		getline(is, s);
		++linesTotal;
	}
	return linesTotal;
}

void Temps::readToVector()
{
	vector<Temps> tempVect;
	ifstream temp_file{ "temperatures.txt" };
	Temps t;
	int n = 0;
	while (n < t.numberLines()) {
		temp_file >> t;
		tempVect.push_back(t);
		++n;
		cout << t;
	}
}
