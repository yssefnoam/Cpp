#include <iostream>
#include "mutantstack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    mstack.push(1);
    std::cout << mstack.top() << std::endl;
    mstack.push(2);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.top() << std::endl;
    return 0;
}

// clang++ -Wall -Wextra -Werror main.cpp && ./a.out