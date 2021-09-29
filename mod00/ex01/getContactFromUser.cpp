#include "phonebook.hpp"

bool getContactFromUser(struct Contact &contact)
{
	std::cin >> contact.firstName >> contact.lastName >> contact.nickName >> contact.phoneNumber >> contact.darkestSecret;
	if (std::cin.fail())
	{
		std::cin.clear();
		return false;
	}
	return true;
}
