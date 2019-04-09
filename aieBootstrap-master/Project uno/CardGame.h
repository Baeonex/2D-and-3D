#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <random>
#include <algorithm>
#include "Effects.h"
#include "CardType.h"
using namespace std;


struct Card
{
	int attack;
	int defense;
	string name;
	string description;
	string attackString;
	string defenseString;
	//string effect;
	Card* target;

};



class Deck
{
public:
	Deck();
	~Deck();

protected:
	//types inside th deck
	Card monster;
	Card spell;
	// max cards inside deck
	int deckLimit;
	string deckName;
	//current deck amount
	int deckAmount;
	vector<Card> p_deck;
};

