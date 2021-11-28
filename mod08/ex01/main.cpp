#include <iostream>
#include "span.hpp"

int main(void)
{
    try{
    }
    catch(std::exception &e) {
        std:cout << "Error: "<< e.what() << std::endl;
    }
    return 0;
}

// clang++ -Wall -Wextra -Werror main.cpp span.cpp