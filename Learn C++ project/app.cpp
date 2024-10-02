#include "main.h"
#include <iostream>


int getUserInput() {
	std::cout << "Please enter a value: ";
	int input{};
	PLOGD << "getUserInput(1) called";
	std::cin >> input;
	return input;
}

void writeAnswer(int x) {
	std::cout << "The answer is " << x << '\n';
}
