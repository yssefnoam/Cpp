#include "functions.hpp"

void printString(std::string String, bool newline)
{
	std::cout << String;
	if (newline)
		std::cout << std::endl;
	return ;
}
