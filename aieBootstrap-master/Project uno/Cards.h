#pragma once
#include <string>
#include "Effects.h"
#include <iostream>
using namespace std;

class Cards
{
public:
	Cards();
	~Cards();


	int attack;
	int defense;
	string name;
	string description;
	string attackString;
	string defenseString;
	string effectName;
	
	void Effect(Effects* effect);
	//string effect;
};

