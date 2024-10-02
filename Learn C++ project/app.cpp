#include "app.h"
#include <iostream>
#include <Plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
plog::init(plog::debug, "Logfile.txt");

int getUserInput() {
	std::cout << "Please enter a value: ";
	int input{};
	std::cin >> input;
	return input;
}

void writeAnswer(int x) {
	std::cout << "The answer is " << x << '\n';
}
