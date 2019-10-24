#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "tests.h"

void test_cardstruct()
{
	CardStruct cardst1 = CardStruct{ Suit(1), Rank(2) };
	string a = toStringShort(cardst1);
	cout << "Short cardstruct description: " << a << '\n';
	string b = toString(cardst1);
	cout << "Long cardstruct description: " << b << '\n';
	Suit su = cardst1.s;
	string u = suitToString(su);
	cout << "Suit type: "<<  u << '\n';
}

void test_card()
{
	Card c1 = Card(Suit(3), Rank(12));
	//Card c1 = Card();
	bool v = c1.isValid();
    string su = c1.suit();
	string ra = c1.rank();
    string tss = c1.toStringShort();
	if (v) {
		cout << "Short card description: " << tss << '\n';
		cout << "Card suit: " << su << '\n';
		cout << "Card rank: " << ra << '\n';
	}
    
}

void test_carddeck()
{
	CardDeck deck1 = CardDeck();
	cout << deck1.printShort() << '\n';
	//deck1.swap(3, 4);
	//cout << deck1.printShort();
	deck1.shuffle();
	cout << deck1.printShort() << '\n';
	Card dc = deck1.drawCard();
	cout << "Drawn card: " + dc.toStringShort();
	for 
}
