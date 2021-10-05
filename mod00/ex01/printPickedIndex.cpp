#include "functions.hpp"

void	printPickedIndex(PhoneBook& phonebook)
{
	int index;
	index = getContactIndexFromUser();
	printContact(phonebook.getIndex(index));
}
