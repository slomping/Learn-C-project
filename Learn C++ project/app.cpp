#include "app.h"
#include <iostream>
#include <Log.h>
#include <RollingFileInitializer.h>
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
