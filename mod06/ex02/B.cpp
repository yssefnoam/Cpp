#include "B.hpp"

B::B(){}

B::B(const B &other) {operator=(other);}

B &B::operator=(const B &other)
{
	if (this != &other)
		return *this;
	return *this;
}

B::~B() {}
