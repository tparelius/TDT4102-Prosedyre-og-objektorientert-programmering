#include "std_lib_facilities.h"
#include "emneKatalog.h"

void CourseCatalog::addCourse()
{
	string kode;
	string navn;
	cout << "Skriv inn emnekode: ";
	cin >> kode;
	cout << "Skriv inn emnenavn: ";
	cin >> navn;
	myMap.insert(pair<string, string>(kode,navn));
	skrivFil(kode, navn);
}

void CourseCatalog::removeCourse()
{
	string kode;
	string navn;
	cout << "Skriv inn emnekode: ";
	cin >> kode;
	myMap.erase(kode);
}

void CourseCatalog::getCourse()
{
	string kode;
	cout << "Skriv inn emnekode: ";
	cin >> kode;
	cout << "Emnekode og emnenavn: " << '\t';
	cout << kode << '\t' << myMap[kode];
}

void CourseCatalog::lesFil()
{
	ifstream infile("courses.txt");
	if (!infile) {
		cout << "Fant ikke fil.";
		exit(1);
	}
	if (infile.is_open()) {
		string line;
		string word;
		string word2;			
		while (infile >> word) {
			getline(infile, line);
			myMap.insert(pair<string, string>(word, line));
		}		
	}infile.close();
}

void CourseCatalog::skrivFil(string kode, string navn)
{
	ofstream myfile("courses.txt");
	myfile << kode << '\t' << navn << endl;
}


ostream & operator<<(ostream &out, const CourseCatalog &cc)
{
	//map<string, string>::iterator iter;
	for (auto iter = cc.myMap.begin(); iter != cc.myMap.end(); ++iter) {
		out << iter->first << '\t';
		out << iter->second << '\n';
	}
	return out;
}