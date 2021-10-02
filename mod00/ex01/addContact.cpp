#include "phonebook.hpp"

void	PhoneBook::addContact(void) {
	bool error;
	int index;
	struct Contact contact;

	error = getContactFromUser(contact);
	if (error == false)
	{
		printString("Error!", 1);
		return ;
	}
	index = this->findFreeIndex();
	this->phoneBook[index].firstName = contact.firstName;
	this->phoneBook[index].lastName = contact.lastName;
	this->phoneBook[index].nickName = contact.nickName;
	this->phoneBook[index].phoneNumber = contact.phoneNumber;
	this->phoneBook[index].darkestSecret = contact.darkestSecret;
	printf("contact ADD\n");
	return;
}
