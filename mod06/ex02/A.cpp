#include "A.hpp"

A::A(){}

A::A(const A &other) {operator=(other);}

A &A::operator=(const A &other)
{
	if (this != &other)
		return *this;
	return *this;
}

A::~A() {}
