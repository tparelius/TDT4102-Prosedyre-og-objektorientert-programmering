#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <algorithm>
#include <list>

using namespace std;


class Person {
private:
public:
	std::string firstN;
	std::string lastN;
	Person() {
	};
	Person(std::string firstn, std::string lastn){
		firstN = firstn;
		lastN = lastn;
	}	
	void printPerson();	
};	

string getLastN(Person p);
bool sortPerson(const Person & a, const Person & b);
void insertOrdered(std::list<Person> &l, const Person& p);