#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base
{
    public:
    A();
    A(const A &);
    A &operator=(const A &);
    virtual ~A();
};

#endif