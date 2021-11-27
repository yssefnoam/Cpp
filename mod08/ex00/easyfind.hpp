#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
bool easyfind(T container, int f)
{
    if(*(std::find(container.begin(), container.end(), f)) == f)
        return true;
    return false;
}

#endif /* end EASY_FIND_HPP */