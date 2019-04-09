#include "Card.h"

Card::Card()
{
}


Card::~Card()
{
}

int Card::Attack(int attack)
{
	this->attack = attack;
	return this->attack;
}
int Card::Health(int health)
{
	this->health = health;
	return this->health;
}
int Card::Grade(int grade)
{
	this->grade = grade;
	return this->grade;
}
void Card::Name(string name)
{
	this->name = name;
}
void Card::Description(string description)
{
	this->description = description;
}
void Card::Effect()
{

}
void Card::Attacked(Card card)
{
	health -= card.attack;
}
void Card::ChangedAttack(Card card)
{

}
int Card::CurrentHealth()
{
	cout << health << endl;
	return this->health;
}
int Card::CurrentAttack()
{
	cout << attack << endl;
	return this->attack;
}
void Card::usingEffect(Card card)
{
}


Effects::Effects()
{

}
