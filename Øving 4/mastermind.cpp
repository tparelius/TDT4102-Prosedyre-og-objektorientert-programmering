#include "std_lib_facilities.h"
#include "tests.h"
#include "utilities.h"
#include "mastermind.h"
#include <string>

void playMastermind() {
	constexpr int size = 4;
	constexpr int letters = 6;
	int n = 15; // antall forsøk
	string code = randomizeString(size, 'A', 'A' + (letters-1));
	cout << code << '\n';
	while (n > 0) {
		string guess = readInputToString(size, 'A', 'A' + (letters - 1));
		checkCharacters(letters, code, guess);
		if (checkCharactersAndPosition(size, code, guess) == size) {
			n = -1;
			cout << "Gratulerer, du vant! ";
		}
		n -= 1;
	}
	if (n == 0) {
		cout << "Looooser ";
	}
		
}

int checkCharactersAndPosition(int size, string code, string guess) {
	int korrekt = 0;
	for (int i = 0; i < size; i++) {
		if (code[i] == guess[i]) {
			korrekt += 1;
			//cout << "Du har rett bokstav i posisjon " << i << '\n';
		}
	}
	cout << "\nDu har " << korrekt << " bokstaver riktig plassert." << '\n';
	return korrekt;
}

int checkCharacters(int letters, string code, string guess) {
	int bokstaver = 0;
	for (int i = 0; i < letters; ++i) {
		int guesscount= countChar(guess, 'A' + i);
		int codecount = countChar(code, 'A' + i);
		if (guesscount <= codecount) {
			bokstaver += guesscount;
		}
		else {
			bokstaver += codecount;
		}
	}
	cout << "\nDu har " << bokstaver<< " korrekte bokstaver." ;
	return bokstaver;
}