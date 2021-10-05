#include "functions.hpp"

void    PhoneBook::setIndex(int index, int field, std::string String)
{
		this->phoneBook[index].contactField[field] = String;
        return ;
}