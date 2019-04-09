#include "hashingApp.h"
#include "Hash.h"
#include <iostream>
#include <string>
using namespace std;
struct Deck
{
	string name;
	int attack;
	int defense;
	int grade;
};
int main() {
	Deck devil = { "Devil", 1000, 600, 4 };


	const int length = 30;
	char data[length] = { 'Jp' };
	// allocation
	//auto app = new hashingApp();
	int hash = 0;
	hash = HashFunction::hash(data, length);
	cout << hash << endl;
	

	// initialise and loop
	//app->run("AIE", 1280, 720, false);

	// deallocation
	//delete app;

	return 0;
}