#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <functional>
#include <fstream>
#include <iostream>

class Card;
using namespace std;
class Card
{
public:
	typedef void (Card::*t_effectPtr)(Card&);
	Card();
	~Card();
	void CreateCard();
	//methods that allocate the card stats and effects
	int Attack(int attack);
	int Health(int health);
	int Grade(int grade);
	void Name(string name);
	void Description(string description);
	void Effect(t_effectPtr effect);
	void Attacking(Card &card);
	void ChangedAttack(Card card);
	int CurrentHealth();
	int CurrentAttack();
	int checkGrade();
	string printName();
	Card usingEffect(Card &card);
	t_effectPtr NoAttackPtr = &Card::NoAttack;
	//void(Card::*NoAttackPtr)(Card card) = &Card::NoAttack;
	//void(Card::*effectPtr)(Card card);
private:
	//stats and effect
	void NoAttack(Card &card);
	//function pointer that stores a pointer to the function that the card contains
	t_effectPtr effectPtr;
	int attack;
	int health;
	int grade;
	string name;
	string description;
};
