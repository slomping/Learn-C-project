#include <iostream>
#include "main.h"


struct Simulation {
	int startHeight{ };
	double cHeight{ };
	const double gravity{ 9.8 };
	double distanceFallen{ 0 };
	int cSecond{ 0 }; //each second is treated as a "cycle"/frame
	int simulationDuration{ 5 };
	
};
Simulation simulate(Simulation& sim) {
	if (sim.cHeight <= 0) {
		sim.cHeight = 0;
		return sim;
	}
	sim.distanceFallen = sim.gravity * (sim.cSecond * sim.cSecond) / 2;
	sim.cHeight = sim.startHeight - sim.distanceFallen;
	sim.cSecond++;
	return sim;
}
int simulaionPrinter(Simulation& sim) {
	if (sim.cHeight <= 0) { std::cout << "At " << sim.cSecond << " seconds, the ball is on the ground." << std::endl; }
	else {
		std::cout << "At " << sim.cSecond << " seconds, the ball is at height: " << sim.cHeight << " meters" << std::endl;
		
	}
 	return 0;
}
int main()
{
	Simulation sim;
	sim.cHeight = static_cast<double>(getIntUserInput("Please enter height of the tower in meters: "));
	for (int i = 0; i < 5; i++) {
		simulate(sim);
		simulaionPrinter(sim);


	}


	return 0;
}

