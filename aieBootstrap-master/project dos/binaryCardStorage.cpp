#include "binaryCardStorage.h"



BinaryCardStorage::BinaryCardStorage()
{
}


BinaryCardStorage::~BinaryCardStorage()
{
}

void BinaryCardStorage::CreateCard()
{

}
void BinaryCardStorage::CheckFile()
{
	if (FileExists("CardLib.dat"))
	{
		ifstream Lib;
		Lib.open("bin.dat", ios::in | ios::binary);
		vector<Card> cardLibrary = {};
		if (Lib.is_open())
		{
			int i = 0;
			while (!Lib.eof() && Lib.peek() != EOF)
			{
				++i;
				cardLibrary.resize(i);
				Lib.read((char*)&cardLibrary[i - 1], sizeof(Card));
				cout << cardLibrary[i - 1].Name << endl;
				cout << cardLibrary[i - 1].Description << endl;
				cout << cardLibrary[i - 1].CurrentAttack << endl;
				cout << cardLibrary[i - 1].CurrentHealth << endl;
				cout << cardLibrary[i - 1].checkGrade << endl;
				cout << endl;
			}
		}
		Lib.close();
	}
	else
	{
		ofstream bin("CardLib.dat", ios::binary);
		Card assassin;
		assassin.Attack(10);
		assassin.Health(5);
		assassin.Effect(assassin.NoAttackPtr);
		assassin.Name("Assassin of the West");
		assassin.Description("One of the great assassins in history");
		assassin.Grade(3);
		cardLib.push_back(assassin);
		fstream writeBin;
		writeBin.open("CardLib.dat", ios::out, ios::binary);
		if (writeBin.is_open())
		{
			for (int i = 0; i < cardLib.size(); ++i)
			{
				writeBin.write((char*)&cardLib[i], sizeof(Card));
			}
		}
		writeBin.close();
		bin.close();
	}
}
bool BinaryCardStorage::FileExists(const char *fileName)
{
	ifstream infile(fileName);
	return infile.good();
}