#include "main.h"
#include <iostream>
// https://jupyter.org/try-jupyter/notebooks/?path=notebooks%2Ftesting.ipynb
bool checkPrime(int num) {
	int x{ 2 };
	if (num == 1) { return false; }
	if (num % 2 == 0) { return false; }
	for (x; x < 9; ++x)
	{
		//std::cout << i << " in checkprime " << std::endl;
		if (num % x == 0 && x != num) {
			//std::cout << num << " is not prime as: " << num << " % " << x  << " = " << num % x << std::endl;
			return false;

		}
		
		
		
			
	}
	//std::cout << num << " is prime as: " << num << " % " << x << " = " << num % x << std::endl;
	return true;
}
int getUserInput() {
	std::cout << "Please enter a value: ";
	int input{};
	std::cin >> input;
	return input;
}

void writeAnswer(int x) {
	std::cout << "The answer is " << x << '\n';
}
