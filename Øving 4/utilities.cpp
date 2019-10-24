#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"
#include "mastermind.h"
#include <string>

int incrementByValueNumTimes(int startValue, int increment, int numTimes)
{
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
		}
	return startValue;
}

void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes)
{
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	
}

void swapNumbers(int& a, int& b)
{
	int oldA = a;
	int oldB = b;
	a = oldB;
	b = oldA;
}

void randomizeVector(vector<int>& percentages, int& n)
{  
	for (int i = 0; i < n; i++) {
		int tall = rand() % (100 + 1);
		percentages[i] = tall;
	}
}

void sortVector(vector<int>& vec2sort, int& n)
{
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0 && vec2sort[j - 1] > vec2sort[j]) {
			swapNumbers(vec2sort[j - 1], vec2sort[j]);
			j = j - 1;
		}
	}
}

double medianOfVector(vector<int> vec)
{
	int n = vec.size();
	double med;
	if (n % 2 == 1)
	{ 
		med = vec[(n - 1) / 2];
	}
	else
	{
		med = 0.5*(vec[n / 2 - 1] + vec[n / 2]);
	}
	return med;
}

string randomizeString(int n, char a, char b)
{
	string str(n,'x');
	for (int i = 0; i < n; i++) {
		int ch = a + rand() % (b-a+1);
		str[i] = ch;
	}
	return str;
}

string readInputToString(int n, char a, char b) {
	a = toupper(a);
	b = toupper(b);	
	string inputString(n, 'x');
	for (int i = 0; i < n; ++i) {
		cout << "Skriv inn bokstav til element " << i << ": ";
		cin >> inputString[i];
		if (isdigit(inputString[i])) {
			cout << "\nBruk kun bokstaver!\n";
			i--;
		}
		if (islower(inputString[i])) {
			inputString[i] = toupper(inputString[i]);
		}
		if (inputString[i]>b || inputString[i]<a) {
			inputString[i] = 'x';
			cout << "\nOut of bounds\n";
			--i;
		}				
	}
	cout << '\n' << inputString;
	return inputString;
}

int countChar(string a, char b)
{
	int n = 0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == b) {
			n += 1;
		}
	}
	//cout << n;
	return n;
}

