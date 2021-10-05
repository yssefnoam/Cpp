#include "functions.hpp"

void	printContactForSearch(int index, struct Contact contact)
{
	if (!contact.contactField[FIRSTNAME].empty())
	{
		printSpace();
		std::cout << index;
		printContactField(contact.contactField[FIRSTNAME]);
		printContactField(contact.contactField[LASTNAME]);
		printContactField(contact.contactField[NICKNAME]);
		printString("", true);
	}
}
