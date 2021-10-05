#include "functions.hpp"

int getContactIndexFromUser(void)
{
	std::string index;
	while (1)
	{
		index = getInput("Enter Contact Index: ");
		if (index == "0")
			return 0;
		else if (index == "1")
			return 1;
		else if (index == "2")
			return 2;
		else if (index == "3")
			return 3;
		else if (index == "4")
			return 4;
		else if (index == "5")
			return 5;
		else if (index == "6")
			return 6;
		else if (index == "7")
			return 7;
	}
}
