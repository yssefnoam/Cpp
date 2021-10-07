#include "functions.hpp"

void	printContactField(std::string String)
{
	printString("|", false);
	if (String.length() > 10)
	{
		String = String.substr(0,9);
		std::cout << String;
		std::cout << ".";
		return ;
	}
	printSpace();
	printString(String, false);
}
