#pragma once
#include "Card.h"


class BinaryCardStorage
{
public:
	BinaryCardStorage();
	~BinaryCardStorage();
	void CreateCard();
	void CheckFile();
	bool FileExists(const char *fileName);

private:
	Card newCard;
	vector<Card> cardLib;

};

