#include "phonebook.hpp"

void	printContact(struct Contact contact)
{
	int i = 0;
	if (!contact.contactField[FIRSTNAME].empty())
	{
		while (i < MAX_CONTACT_FIELD)
			printString(contact.contactField[i++], true);
	}
}
