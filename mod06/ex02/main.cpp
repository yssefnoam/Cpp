#include <iostream>
#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base *generate()
{
	std::srand(std::time(NULL));
	switch (std::rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		Base &tmp = dynamic_cast<A &>(p);
		static_cast<void>(tmp);
		std::cout << "A" << std::endl;
		return;
	}
	catch (...) { }
	try {
		Base &tmp = dynamic_cast<B &>(p);
		static_cast<void>(tmp);
		std::cout << "B" << std::endl;
		return;
	}
	catch (...) { }
	try {
		Base &tmp = dynamic_cast<C &>(p);
		static_cast<void>(tmp);
		std::cout << "C" << std::endl;
		return;
	}
	catch (...) { }
}

int main(void)
{
	Base *ptr = generate();
	identify(ptr);

	Base &address = *(generate());
	identify(address);

	return 0;
}
