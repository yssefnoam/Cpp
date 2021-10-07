#include "functions.hpp"

int     PhoneBook::getFreeIndex(void)
{
    int i;

    i = this->freeIndex;
    if (i == 7)
        this->freeIndex = 0;
    else
        this->freeIndex++;
    return i;
}