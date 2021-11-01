#ifndef Cat_HPP
#define Cat_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    public:
        Brain *brain;
public:
    Cat(void);
    ~Cat(void);
    void makeSound(void)const;
};

#endif