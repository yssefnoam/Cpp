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
    Dog(const Dog&);
    Dog& operator=(const Dog&);
    virtual ~Dog(void);
    void makeSound(void) const;
    Brain* getBrainAddress(void);
};

#endif