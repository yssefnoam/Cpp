#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "constant.hpp"
#include "contact.struct.hpp"


class	PhoneBook{

private:
	struct Contact phoneBook[MAX_CONTACT];
	int	freeIndex;

public:
	PhoneBook(void);
	struct Contact getIndex(int);
	void	setIndex(int, int, std::string);
	int		getFreeIndex(void);

};

#endif
