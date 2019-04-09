#include "Resource_ManagerApp.h"

int main() {
	
	// allocation
	auto app = new Resource_ManagerApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}