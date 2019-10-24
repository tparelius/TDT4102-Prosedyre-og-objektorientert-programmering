#pragma once
#include "std_lib_facilities.h"

class Temps {
private:
	float max;
	float min;
public:
	friend istream& operator>>(istream& is, Temps& t);
	friend ostream& operator<<(ostream& ut, const Temps& t);
	int numberLines();
	void readToVector();
};

/*
class allTemps {
private:
	vector<Temps> tempVect;
};

*/