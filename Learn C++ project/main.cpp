#include <iostream>
#include "main.h"




int main()
{
#if 0
	
	int x{ getUserInput() };
#endif
	std::cout << std::boolalpha;
	
	for (int z = 1; z < 35; ++z){
		
		//std::cout << 6 % z << " " << z( << std::endl;
		std::cout << z << " " << checkPrime(z) << std::endl;
	}
	
	return 0;
}

