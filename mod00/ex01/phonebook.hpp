#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>

struct	Contact{
	std::string firstName = std::string(NULL);
	std::string lastName = std::string(NULL);
	std::string nickName = std::string(NULL);
	std::string phoneNumber = std::string(NULL);
	std::string darkestSecret = std::string(NULL);
};

class	PhoneBook{

	public:
	PhoneBook(void){
		struct Contact contactList[8];

	}
	void addContact(void);

};

#endif
