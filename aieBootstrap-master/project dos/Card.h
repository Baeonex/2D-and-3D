#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <functional>
class Card;
using namespace std;
class Card
{
public:
	typedef void (Card::*t_effectPtr)(Card&);
	Card();
	~Card();
	
	int Attack(int attack);
	int Health(int health);
	int Grade(int grade);
	void Name(string name);
	void Description(string description);
	void Effect(t_effectPtr effect);
	void Attacked(Card card);
	void ChangedAttack(Card card);
	int CurrentHealth();
	int CurrentAttack();
	Card usingEffect(Card &card);
	t_effectPtr NoAttackPtr = &Card::NoAttack;
	//void(Card::*NoAttackPtr)(Card card) = &Card::NoAttack;

	//void(Card::*effectPtr)(Card card);


private:
	void NoAttack(Card &card);
	t_effectPtr effectPtr;
	int attack;
	int health;
	int grade;
	string name;
	string description;
};
