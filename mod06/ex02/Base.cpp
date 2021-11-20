#include "Base.hpp"

Base::Base(){}

Base::Base(const Base &other) {operator=(other);}

Base &Base::operator=(const Base &other)
{
	if (this != &other)
		return *this;
	return *this;
}

Base::~Base() {}
