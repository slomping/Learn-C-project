#include <iostream>
#include "app.h"
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>





int main()
{
	plog::init(plog::debug, "Logfile.txt");
	int x{ getUserInput() };
	int y{ getUserInput() };
	writeAnswer(x + y);
	return 0;
}

