#include "functions.hpp"

void    eofReached(void)
{
    if (std::cin.eof())
        exit(1);
}