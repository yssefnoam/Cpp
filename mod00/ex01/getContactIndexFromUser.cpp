#include "phonebook.hpp"

int	getContactIndexFromUser(void)
{
	int index;

	do {
		eofReached();
		printString("Enter Index(0-7):", true);
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	} while(!(std::cin >> index) || !(index <= 7 && index >= 0));

	return index;
}
