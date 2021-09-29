#include "phonebook.hpp"

void	printContact(struct Contact contact)
{
	if (!contact.firstName.empty())
	{
		printString(contact.firstName, true);
		printString(contact.lastName, true);
		printString(contact.nickName, true);
		printString(contact.phoneNumber, true);
		printString(contact.darkestSecret, true);
	}
}
