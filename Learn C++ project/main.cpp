#include <iostream>
#include "main.h"
struct Calculator {
	double a;
	double b;
	char operand;
};



char getCharUserInput() {

	char input { };
	std::cout << "Enter +, -, *, or /: ";
	std::cin >> input;
	return input;
}
double getDoubleUserInput() {
	
	std::cout << "Enter a double value: ";
	double input{ };
	std::cin >> input;
	return input;
}
double calc(Calculator calculator) {;
	if (calculator.operand == '+') { return calculator.a + calculator.b; }
	if (calculator.operand == '*') { return calculator.a * calculator.b; }
	if (calculator.operand == '/') { return calculator.a / calculator.b; }
	if (calculator.operand == '-') { return calculator.a - calculator.b; }

	
}
int main()
{
	Calculator calculator;
	double ans{ };
	while (true) {
		calculator.a = getDoubleUserInput();
		calculator.b = getDoubleUserInput();
		calculator.operand = getCharUserInput();
		double ans = calc(calculator);
		std::cout << calculator.a << " " << calculator.operand << " " << calculator.b << " is " << ans << std::endl;
	}
	
	return 0;
}

