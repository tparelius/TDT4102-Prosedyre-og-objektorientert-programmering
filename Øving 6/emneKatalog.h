#pragma once
#include "std_lib_facilities.h"

class CourseCatalog {
private:
	map<string, string> myMap;
public:
	friend ostream& operator<<(ostream&, const CourseCatalog&);
	void addCourse();
	void removeCourse();
	void getCourse();
	void lesFil();
	void skrivFil(string kode, string navn);
	
};