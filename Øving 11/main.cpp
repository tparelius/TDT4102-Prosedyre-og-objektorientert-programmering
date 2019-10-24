#include "vectorIterator.h"
#include "setIterator.h"
#include "Person.h"
#include "LinkedList.h"
#include "templates.h"

#include <vector>
#include <string>
#include <iostream>
#include <set>

using namespace std;

void oppg1abc() {
	//Deklarasjoner
	std::vector<std::string> vect1 = { "Lorem", "Ipsum", "Dolor", "Sit", "Amet", "Consecutor" };
	std::vector<std::string> vect2 = { "Lorem", "Ipsum", "Lorem", "Dolor", "Lorem" };
	std::string old = "Lorem";
	std::string replacement = "Latin";

	//Funksjoner
	iter(vect1);
	reviter(vect1);
	replace(vect2, old, replacement);
}

void oppg1d() {
	//Deklarasjoner
	std::set<std::string> set1 = { "Lorem", "Ipsum", "Dolor", "Sit", "Amet", "Consecutor" };
	std::set<std::string> set2 = { "Lorem", "Ipsum", "Dolor", "Lorem" };
	std::string old = "Lorem";
	std::string replacement = "Latin";

	//Funksjoner
	setIter(set1);
	setRevIter(set1);
	setIter(set2);
	setReplace(set2, old, replacement);
}

void oppg2() {
	std::list<Person> personList;
	std::list<Person>::iterator it;

	Person p1 = Person("Nori", "Jonasova");
	Person p2 = Person("Thomas", "Parelius");
	Person p3 = Person("Liv", "Emilie");
	
	insertOrdered(personList, p1);
	insertOrdered(personList, p2);
	insertOrdered(personList, p3);

	
	for (it = personList.begin(); it != personList.end(); ++it) {
		(*it).printPerson();
	}
}

void oppg4() {
	//a)
	int a = 1;
	int b = 2;
	int c = maximum(a, b);
	cout << c;
	double d = 2.4;
	double e = 3.2;
	double f = maximum(d, e);
	cout << '\n' << f << endl;

	//b)
	vector<int> vec1{1,2,3,4,5,6,7};
	shuffle(vec1);
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); ++it)
		std::cout << *it << ' ';
	cout << '\n';
	
	vector<double> vec2{1.2, 2.2, 3.2, 4.2};
	shuffle(vec2);
	for (std::vector<double>::iterator it = vec2.begin(); it != vec2.end(); ++it)
		std::cout << *it << ' ';
	cout << '\n';
	
	vector<string> vec3{"one", "two", "three", "four"};
	shuffle(vec3);
	for (std::vector<string>::iterator it = vec3.begin(); it != vec3.end(); ++it)
		std::cout << *it << ' ';
}


int main()
{
	//oppg1abc();
	//oppg1d();
	//oppg2();
	//oppg4();
	
	return 0;
}

