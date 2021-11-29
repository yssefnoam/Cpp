#include <iostream>
#include "mutantstack.hpp"

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::container_type::begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::container_type::end();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::rbegin()
{
    return std::stack<T>::container_type::rbegin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::rend()
{
    return std::stack<T>::container_type::rend();
}