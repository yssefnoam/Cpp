#include "phonebook.hpp"

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
	std::cout << String;
	printSpace(10 - String.length());
}
