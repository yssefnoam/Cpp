#include "C.hpp"

C::C(){}

C::C(const C &other) {operator=(other);}

C &C::operator=(const C &other)
{
	if (this != &other)
		return *this;
	return *this;
}

C::~C() {}
