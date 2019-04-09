#pragma once
#include "Card.h"
class Deck
{
public:
	Deck();
	~Deck();
	
	void CreateDeck();
	void CreateCards();
private:
	vector<Card> m_Deck;
	const int maxDeckSize = 30;

};

