#include "phonebook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while (1)
	{
		printString("Enter a command (ADD,SEARCH,EXIT): ", false);
		std::cin >> command;
		if (command == "ADD") {
			phoneBook.addContact();
		}
		else if (command == "SEARCH") {
			phoneBook.printAvailableContact();
			phoneBook.printPickedIndex();
		}
		else if (command == "EXIT") {
			std::cout << "Bye.\n";
			return 0;
		}
	}
	return 0;
}
