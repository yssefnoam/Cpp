#include "phonebook.hpp"

bool getContactFromUser(struct Contact &contact)
{
	if (std::scanf("%s %s %s %s %s\n", &(contact.firstName), &(contact.lastName), &(contact.nickName), &(contact.phoneNumber), &(contact.darkestSecret)) == 6)
		return (true);
	return (false);
}
