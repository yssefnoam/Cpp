#include "phonebook.hpp"

void PhoneBook::printAvailableContact(void)
{
	int i = 0;
	struct Contact contact;

	while (i < MAX_CONTACT)
	{
		contact = this->phoneBook[i];
		printContactForSearch(i, contact);
		i++;
	}
}
