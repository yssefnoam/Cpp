#ifndef PHONEBOOK_H
# define PHONEBOOK_H

// max contact that the programme can handel
# define MAX_CONTACT	8

// Contact Field
# define MAX_CONTACT_FIELD	5
# define FIRSTNAME		0
# define LASTNAME		1
# define NICKNAME		2
# define PHONENUMBER	3
# define DARKESTSECRET	4

// Include Headers
#include <iostream>


struct	Contact{
	std::string contactField[MAX_CONTACT];
};

class	PhoneBook{

private:
	struct Contact phoneBook[MAX_CONTACT];

public:
	void	addContact(void);
	void	printAvailableContact(void);
	void	printPickedIndex(void);
	int		findFreeIndex(void);

};

void		printString(std::string, bool);
void		printContactForSearch(int index, struct Contact);
void		printSpace(int);
void		printContactField(std::string);
int			getContactIndexFromUser(void);
void		printContact(struct Contact);
void		eofReached(void);
std::string getInput(std::string);

#endif
