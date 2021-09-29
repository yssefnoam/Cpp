#include "phonebook.hpp"

int	getContactIndexFromUser(void)
{
	int index;

	do	{
		printString("Enter Index[0-7]", true);
		std::cin.clear();
	}while (!(std::cin >> index));

	return index;
}
