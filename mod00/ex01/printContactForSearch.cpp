#include "phonebook.hpp"

void	printContactForSearch(int index, struct Contact contact)
{
	if (!contact.firstName.empty())
	{
		std::cout << index;
		printSpace(9);
		printContactField(contact.firstName);
		printContactField(contact.lastName);
		printContactField(contact.nickName);
		printString("", true);
	}
}
