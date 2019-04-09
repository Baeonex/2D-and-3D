#include "project_dosApp.h"
#include "Card.h"
#include "binaryCardStorage.h"
int main() {
	/*
	// allocation
	auto app = new project_dosApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
	*/

	BinaryCardStorage Library;
	Library.CreateCard();


	return 0;
}