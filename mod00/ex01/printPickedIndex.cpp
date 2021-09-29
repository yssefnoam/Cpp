#include "phonebook.hpp"

void	PhoneBook::printPickedIndex(void)
{
	int index;
	index = getContactIndexFromUser();
	printContact(this->phoneBook[index]);
}
