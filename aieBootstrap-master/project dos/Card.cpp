#include "Card.h"



Card::Card()
{

}
Card::~Card()
{
}


void Card::CreateCard()
{

}


//allocates the attack int to the object
int Card::Attack(int attack)
{
	this->attack = attack;
	return attack;
}
//allocates the health int to the object
int Card::Health(int health)
{
	this->health = health;
	return this->health;
}
//allocates the grade int to the object
int Card::Grade(int grade)
{
	this->grade = grade;
	return this->grade;
}
//allocates the name string to the object
void Card::Name(string name)
{
	this->name = name;
}
//allocates the description string to the object
void Card::Description(string description)
{
	this->description = description;
}
//points to the unique function that the object has the cards effect
void Card::Effect(t_effectPtr effect)
{
	effectPtr = effect;
}
//when the card is attacked
void Card::Attacking(Card &card)
{
	card.health -= attack;
}
void Card::ChangedAttack(Card card)
{

}
//checks cards current health
int Card::CurrentHealth()
{
	cout << health << endl;
	return this->health;
}
//checks the cards current attack
int Card::CurrentAttack()
{
	cout << attack << endl;
	return this->attack;
}
//uses the effect that the current cards effectPtr contains on the card in the parameter 
Card Card::usingEffect(Card &card)
{
	(this->*effectPtr)(card);
	return card;
}
int Card::checkGrade()
{
	cout << grade << endl;
	return grade;
}
//an effect
void Card::NoAttack(Card &card)
{
	card.CurrentAttack();
	card.Attack(0);
	card.CurrentAttack();
}