#include "Person.h"

void Person::printPerson()
{
	cout << firstN << '\t' << lastN << std::endl;
}

string getLastN(Person p) {
	return p.lastN;
}
//*
bool sortPerson(const Person & a, const Person & b)
{
	return getLastN(a)< getLastN(b);
}
//*/
void insertOrdered(std::list<Person>& l, const Person & p)
{
	l.push_back(p);
	l.sort(sortPerson);	
}
