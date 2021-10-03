#include "phonebook.hpp"

void	printContactForSearch(int index, struct Contact contact)
{
	if (!contact.contactField[FIRSTNAME].empty())
	{
		std::cout << index;
		printSpace(9);
		printContactField(contact.contactField[FIRSTNAME]);
		printContactField(contact.contactField[LASTNAME]);
		printContactField(contact.contactField[NICKNAME]);
		printString("", true);
	}
}
