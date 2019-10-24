#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"
#include "mastermind.h"
#include <string>

int main(){
	srand(static_cast<unsigned int>(time(nullptr)));

	//testCallByValue();
	//testCallByRefence();
	//swapTest();
	//testVectorSorting();
	//testString();
	//readInputToString(5, 'b', 'h');
	//countChar("abcdefgh", 'd');
	playMastermind();
	return 0;
}