#include "phonebook.hpp"

bool getContactFromUser(struct Contact &contact)
{
	std::cin >> contact.firstName;
	std::cin >> contact.lastName;
	std::cin >> contact.nickName;
	std::cin >> contact.phoneNumber;
	std::cin >> contact.darkestSecret;
	if (std::cin.fail())
	{
		std::cin.clear();
		return false;
	}
	return true;
}
