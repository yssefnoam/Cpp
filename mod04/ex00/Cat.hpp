#ifndef Cat_HPP
#define Cat_HPP
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
public:
    Cat(void);
    ~Cat(void);
    void makeSound(void);
};

#endif