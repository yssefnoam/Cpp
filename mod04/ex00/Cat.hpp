#ifndef Cat_HPP
#define Cat_HPP
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
public:
    Cat(void);
    Cat(const Cat&);
    Cat& operator=(const Cat&);
    ~Cat(void);
    void makeSound(void)const;
};

#endif