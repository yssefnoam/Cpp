#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Brain *brain;

public:
    Dog(void);
    ~Dog(void);
    void makeSound(void) const;
};

#endif