#include "functions.hpp"

int main(void)
{
	std::string command;
	PhoneBook phoneBook = PhoneBook();

	while (1)
	{
		command = getInput("Enter a command (ADD,SEARCH,EXIT): ");

		if (command == "ADD") {
			addContact(phoneBook);
		}
		else if (command == "SEARCH") {
			printAvailableContact(phoneBook);
			printPickedIndex(phoneBook);
		}
		else if (command == "EXIT") {
			printString("Bye.", true);
			return 0;
		}
	}
	return 0;
}
