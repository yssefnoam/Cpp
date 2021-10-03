#include "phonebook.hpp"

void	PhoneBook::addContact(void) {
	int index;
	int i = 0;
	std::string input;
	std::string prompt[5] = {
		"Enter First Name: ",
		"Enter Last Name: ",
		"Enter Nick Name: ",
		"Enter Phone Number: ",
		"Enter Darkest Secret: ",

	};

	index = this->findFreeIndex();
	while (i < MAX_CONTACT_FIELD)
	{
		do {
			input = getInput(prompt[i]);
		} while (input == "");
		this->phoneBook[index].contactField[i] = input;
		i++;
	}
	return;
}
