#pragma once
#include "std_lib_facilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes);

void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);

void swapNumbers(int& a, int& b);

void randomizeVector(vector<int>& percentages, int& n);

void sortVector(vector<int>& vec2sort, int& n);

double medianOfVector(vector<int> vec);

string randomizeString(int n, char a, char b);

string readInputToString(int n, char a, char b);

int countChar(string a, char b);