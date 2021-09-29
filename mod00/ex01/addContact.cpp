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
	if (index == -1)
	{
		this->contactList[0].firstName = contact.firstName;
		this->contactList[0].lastName = contact.lastName;
		this->contactList[0].nickName = contact.nickName;
		this->contactList[0].phoneNumber = contact.phoneNumber;
		this->contactList[0].darkestSecret = contact.darkestSecret;
		return;
	}
	this->contactList[0].firstName = contact.firstName;
	this->contactList[0].lastName = contact.lastName;
	this->contactList[0].nickName = contact.nickName;
	this->contactList[0].phoneNumber = contact.phoneNumber;
	this->contactList[0].darkestSecret = contact.darkestSecret;
	return;
}
