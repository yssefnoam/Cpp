#include "functions.hpp"

void	addContact(PhoneBook &phonebook) {
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

	index = findFreeIndex(phonebook);
	while (i < MAX_CONTACT_FIELD)
	{
		do {
			input = getInput(prompt[i]);
		} while (input == "");
		phonebook.setIndex(index, i, input);
		i++;
	}
	return;
}
