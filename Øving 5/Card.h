#pragma once
#include "std_lib_facilities.h"



enum class Suit { clubs=0, diamonds, hearts, spades };

enum class Rank { two=0, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };

string suitToString(Suit s);

string rankToString(Rank r);

struct CardStruct {Suit s; Rank r;};

string toString(struct CardStruct);

string toStringShort(struct CardStruct);

class Card {
private:
	Suit s;
	Rank r;
	bool valid;
	
public:	
	
	Card();
	Card(Suit suit, Rank rank);
	string suit();
	string rank();
	bool isValid();
	string toStringShort();
};
