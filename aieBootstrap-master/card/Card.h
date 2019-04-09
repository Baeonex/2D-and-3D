#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <functional>

using namespace std;
class Card;
class Effects;

class Effects
{
public:
	Effects();
	~Effects();
protected:
};

class Card
{
public:
	Card();
	~Card();

	int Attack(int attack);
	int Health(int health);
	int Grade(int grade);
	void Name(string name);
	void Description(string description);
	void Effect();
	void Attacked(Card card);
	void ChangedAttack(Card card);
	int CurrentHealth();
	int CurrentAttack();
	void usingEffect(Card card);


protected:
	int attack;
	int health;
	int grade;
	string name;
	string description;
};
