#include "phonebook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while (1)
	{
		command = getInput("Enter a command (ADD,SEARCH,EXIT): ");

		if (command == "ADD") {
			phoneBook.addContact();
		}
		else if (command == "SEARCH") {
			phoneBook.printAvailableContact();
			phoneBook.printPickedIndex();
		}
		else if (command == "EXIT") {
			printString("Bye.", true);
			return 0;
		}
	}
	return 0;
}
