#include <iostream>
#include "mutantstack.hpp"
#include <stack>
#include <list>

int main()
{
    MutantStack<int> mstack;
    // std::list<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "------------------------------" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "------------------------------" << std::endl;
    MutantStack<int>::reverse_iterator itr = mstack.rbegin();
    MutantStack<int>::reverse_iterator itre = mstack.rend();
    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    ++itr;
    --itr;
    while (itr != itre)
    {
        std::cout << *itr << std::endl;
        ++itr;
    }
    return 0;
}

// clang++ -Wall -Wextra -Werror main.cpp mutantstack.cpp && ./a.out
