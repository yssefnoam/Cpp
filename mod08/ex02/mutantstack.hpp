#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template<typename T >
class MutantStack: public std::stack<T>
{
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    iterator begin();
    iterator end();
    iterator rbegin();
    iterator rend();
};

#endif