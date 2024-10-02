#include <iostream>
#include "main.h"


struct Simulation {
	double cHeight;
	const double gravity{ 9.8 };
	double distanceFallen{ };
	int cSecond;
	int simulationDuration{ 5 };
	
};
double simulate(int height) {
	double cHeight{}; 
	const double gravity{ 9.8 };
	int cSecond{ 0 };

	return cHeight;
}
int main()
{
	Simulation sim;
	double startHeight{ static_cast<double>(getIntUserInput("Please enter height of the tower in meters: ")) };
	std::cout << "hi";


	return 0;
}

