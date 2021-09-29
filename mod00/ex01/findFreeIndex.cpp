#include "phonebook.hpp"

int	PhoneBook::findFreeIndex(void)
{
	int i = 0;
	while (i < MAX_CONTACT)
	{
		if (this->contactList[i].firstName == NULL)
			return (i);
		i++;
	}
	return (-1);
}
