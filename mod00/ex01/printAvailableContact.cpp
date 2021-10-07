#include "functions.hpp"

void printAvailableContact(PhoneBook &phonebook)
{
	int i = 0;
	struct Contact contact;

	while (i < MAX_CONTACT)
	{
		contact = phonebook.getIndex(i);
		printContactForSearch(i, contact);
		i++;
	}
}
