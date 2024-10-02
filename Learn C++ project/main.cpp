#include <iostream>
#include "main.h"


int main()
{
	plog::init(plog::debug, "Logfile.txt");
	int x{ getUserInput() };
	PLOGD << "testin";
	int y{ getUserInput() };
	writeAnswer(x + y);
	return 0;
}

