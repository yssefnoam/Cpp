#include "phonebook.hpp"

class	Head{
};

int main(void)
{
	std::string command;

	while (1)
	{
		std::cout << "Enter a command (ADD,SEARCH,EXIT): ";
		std::cin >> command;
		if (command == "ADD") {

		}
		else if (command == "SEARCH") {

		}
		else if (command == "EXIT") {
			std::cout << "Bye.\n";
			return 0;
		}

	}
	return 0;
}
