#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>

class Error : std::exception
{
public:
    const char *what()const throw() { return "No occurrence find"; }
};

template <typename T>
void easyfind(T container, int f)
{
    T::iterator it;
    it = container.find(f);
    if (it == container.end())
        throw Error();
    std::cout << *it << std::endl;
}

#endif /* end EASY_FIND_HPP */