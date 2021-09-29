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
	struct Contact phoneBook[MAX_CONTACT];
public:
	void	addContact(void);
	void	printAvailableContact(void);
	void	printPickedIndex(void);
	int	findFreeIndex(void);
};

void	printString(std::string, bool);
bool	getContactFromUser(struct Contact &);
void	printContactForSearch(int index, struct Contact);
void	printSpace(int);
void	printContactField(std::string);
int	getContactIndexFromUser(void);
void	printContact(struct Contact);

#endif
