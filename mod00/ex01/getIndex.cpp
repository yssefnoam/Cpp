#include "functions.hpp"

struct Contact PhoneBook::getIndex(int index)
{
    return this->phoneBook[index];
}