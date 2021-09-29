#include "phonebook.hpp"

int	PhoneBook::findFreeIndex(void)
{
	int i = 0;
	std::string String;

	while (i < MAX_CONTACT)
	{
		String = this->phoneBook[i].firstName;
		if (String.empty())
			return (i);
		i++;
	}
	return (0);
}
