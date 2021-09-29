#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define MAX_CONTACT 8
#include <iostream>

struct	Contact{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
};

class	PhoneBook{
	struct Contact contactList[MAX_CONTACT];
public:
	void	addContact(void);
	void	printContact(void);
	int	findFreeIndex(void);
};

void	printString(std::string String, int newline);
bool	getContactFromUser(struct Contact &contact);

#endif
