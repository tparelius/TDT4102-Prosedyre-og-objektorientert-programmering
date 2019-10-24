#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"
#include "mastermind.h"
#include <string>


void testCallByValue()
{
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;

}

void testCallByRefence()
{
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int startValue = 0;
	int result = 0;
	incrementByValueNumTimesRef(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;

}

void swapTest() {
	int a = 1;
	int b = 2;
	swapNumbers(a, b);
	cout << "a: " << a << '\n';
	cout << "b: " << b;
}

void testVectorSorting()
{
	// Make a vector of length n
	int n = 11;
	vector<int> percentages(n,0);

	// Fill the vector with random numbers and print
	randomizeVector(percentages, n);
	// Print out the random vector
	cout << "Random vector and random vector with swapped first two digits";
	cout << '\n';
	for (int i = 0; i < n; i++) {
		cout << percentages[i] << " ";
	}
	cout << '\n';
	
	// Swap the first two numbers and print
	swapNumbers(percentages[0], percentages[1]);
	for (int i = 0; i < n; i++) {
		cout << percentages[i] << " ";
	}
	cout << '\n';

	double median1 = medianOfVector(percentages);
	cout << "Median of unsorted vector:" << '\n';
	cout << median1 << '\n';
	
	// Sort the vector and print it
	sortVector(percentages, n);
	cout << "Sorted vector:" <<'\n';
	for (int i = 0; i < n; i++) {
		cout << percentages[i] << " ";
	}
	cout << '\n';

	double median = medianOfVector(percentages);
	cout << "Median of sorted vector:" << '\n';
	cout << median << '\n';

	
}

void testString()
{
	string grades = randomizeString(120, 'A', 'F');
	//cout << '\n' << grades << '\n';

	vector<int> gradeCount(6,0);

	for (int i = 0; i < 6; ++i) {
		gradeCount[i] = countChar(grades, 'F'-i);
	}

	double sum = 0.0;
	for (int i = 0; i < 6; ++i) {
		sum += (gradeCount[i] * i);
	}

	double antall = 0.0;
	for (int i = 0; i < 6; ++i) {
		antall += gradeCount[i];
	}
	cout << "Karakterer fra F til A: \n";
	for (int n = 0; n < 6; ++n) {
		cout << gradeCount[n] << '\n';
	}
	
	double avg = sum / antall;
	cout << "\nSum: " <<sum;
	cout << "\nAntall: " << antall;
	cout << "\nGjennomsnitt: " << avg;
}
