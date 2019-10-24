#pragma once
#include "std_lib_facilities.h"
#include "Card.h"



class CardDeck {
private:
	int currentCardIndex;
	vector<Card> cards;
	

public:
	CardDeck();
	void swap(int a, int b);
	string print();
	string printShort();
	void shuffle();
	const Card& drawCard();
	
};
