#include <iostream>
#include <string>


struct Simulation {
	int startHeight{ };
	double cHeight{ };
	const double gravity{ 9.8 };
	double distanceFallen{ 0 };
	int cSecond{ 0 }; //each second is treated as a "cycle"/frame
	int simulationDuration{ 6 };
	void setHeight(double h) { 
		startHeight = static_cast<int>(h);
		cHeight = h;
	}
};

int getIntUserInput(std::string prompt) {
	std::cout << prompt;
	int input{};
	std::cin >> input;
	return input;
}


int simulationPrinter(Simulation& sim) {
	if (sim.cHeight <= 0) { std::cout << "At " << sim.cSecond << " seconds, the ball is on the ground." << std::endl; }
	else {
		std::cout << "At " << sim.cSecond << " seconds, the ball is at height: " << sim.cHeight << " meters" << std::endl;
		
	}
 	return 0;
}

Simulation simulate(Simulation& sim) {
	
	if (sim.cHeight <= 0) {
		sim.cHeight = 0;
		return sim;
	}
	sim.distanceFallen = sim.gravity * (sim.cSecond * sim.cSecond) / 2;
	sim.cHeight = sim.startHeight - sim.distanceFallen; //I initially just used cHeight = cHeight - distanceFallen, but as cSecond increased, the rate of decline
	//exponentially?? increased, so i decided to use startHeight and a *constructor*?? on my stuct to initialise
	// the two variables at the same time 
	simulationPrinter(sim);
	sim.cSecond++;
	return sim;
}

int main()
{
	Simulation sim;
	sim.setHeight(static_cast<double>(getIntUserInput("Please enter height of the tower in meters: ")));
	for (int i = 0; i < sim.simulationDuration; i++) {
		simulate(sim); // I also initially had problems here as i was passing the whole sim object to my functions, instead of using a memory reference. 
		 //I have no idea if return sim; actually does anything as i think simulate() just edits the values in memory instead of the function needing to be
							//recopied (eg. in python, i would need to use sim = simulate(sim) )
	}
	return 0;
}

