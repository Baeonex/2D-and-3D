#include "Project_TroisApp.h"

int main() {
	
	// allocation
	auto app = new Project_TroisApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}