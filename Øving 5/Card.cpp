#include "std_lib_facilities.h"
#include "Card.h"

string suitToString(Suit s)
{
	string type;
	switch (s) {
	case Suit::clubs: type = "clubs"; break;
	case Suit::diamonds: type = "diamonds"; break;
	case Suit::hearts: type = "hearts"; break;
	case Suit::spades: type = "spades"; break;
	}
	return type;
}

string rankToString(Rank r)
{
	string verdi;
	switch (r) {
	case Rank::two: verdi = "two"; break;
	case Rank::three: verdi = "three"; break;
	case Rank::four: verdi = "four"; break;
	case Rank::five: verdi = "five"; break;
	case Rank::six: verdi = "six"; break;
	case Rank::seven: verdi = "seven"; break;
	case Rank::eight: verdi = "eight"; break;
	case Rank::nine: verdi = "nine"; break;
	case Rank::ten: verdi = "ten"; break;
	case Rank::jack: verdi = "jack"; break;
	case Rank::queen: verdi = "queen"; break;
	case Rank::king: verdi = "king"; break;
	case Rank::ace: verdi = "ace"; break;
	}
	return verdi;
}

string toString(CardStruct card)
{
	string farge = suitToString(card.s);
	string verdi = rankToString(card.r);
	string kort = verdi + " of " + farge;
	return kort;
}

string toStringShort(CardStruct card)
{	
	string farge = suitToString(card.s);
	char a = farge.at(0);
	int b = int(card.r) +2;
	string r = to_string(b);
	string kort = a + r;
	return kort;
}

Card::Card() {
	valid = false;
}

Card::Card(Suit suit, Rank rank)
	:s{ suit }, r{ rank }{
	valid = true;
}


string Card::suit() {
		return suitToString(s);
}

string Card::rank() {
		return rankToString(r);
}

bool Card::isValid() {
	if (suit().empty()==true) {
		return false;
	}
	if (rank().empty()==true) {
		return false;
	}
	else {
		return true;
	}
}

string Card::toStringShort() {
	if (isValid() == true) {
		string farge = suitToString(s);
		char a = farge.at(0);
		int b = int(r);
		string r = to_string(b);
		string kort = a + r;
		return kort;
	}
	if (isValid() == false) {
		cout << "\nUgyldig kort\n";
	}
}

