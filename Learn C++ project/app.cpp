#include "main.h"
#include <iostream>


int getIntUserInput(std::string prompt) {
	std::cout << prompt;
	int input{};
	std::cin >> input;
	return input;
}

void writeAnswer(int x) {
	std::cout << "The answer is " << x << '\n';
}
