#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"

CardDeck::CardDeck()
{
	currentCardIndex = 0;
	for (int i = 0; i < 4; ++i) {
		for (int n = 0; n < 13; ++n) {
			cards.push_back( Card( Suit(i), Rank(n) )); 
			//cards[i * 13 + n] = Card(Suit(i + 1), Rank(n + 1) );
		}		
	}	
}

void CardDeck::swap(int a, int b)
{
	Card olda = cards[a];
	Card oldb = cards[b];
	cards[a] = oldb;
	cards[b] = olda;
}

string CardDeck::print()
{
	string str = "";
	for (int i = 0; i < 52; ++i) {
	str += cards[i].rank()+ " of "+ cards[i].suit() + ", ";
	}
	return str;
}

string CardDeck::printShort()
{
	string str = "";
	for (int i = 0; i < 52; ++i) {
		str += cards[i].toStringShort() + ", ";
	}
	return str;
}

void CardDeck::shuffle()
{
	srand(time(NULL));
	int a;
	int b;
	int count = 200;
	int n = 0;
	while (n < count) {
		a = rand() % 52;
		b = rand() % 52;
		swap(a, b);
		n += 1;
	}
}

const Card& CardDeck::drawCard()
{
	Card drawnCard = cards[currentCardIndex];
	currentCardIndex += 1;
	return drawnCard;
	
}

