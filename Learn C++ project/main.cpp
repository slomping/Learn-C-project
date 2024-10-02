#include <iostream>
#include "app.h"





int main()
{
	int x{ getUserInput() };
	int y{ getUserInput() };
	writeAnswer(x + y);
	return 0;
}

