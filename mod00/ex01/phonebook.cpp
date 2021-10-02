#include "phonebook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while (1)
	{
		do {
			eofReached();
			printString("Enter a command (ADD,SEARCH,EXIT):", true);
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		} while(!(std::cin >> command) || std::cin.eof());

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
