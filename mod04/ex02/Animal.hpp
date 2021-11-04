#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal(void);
    Animal(const Animal &);
    Animal& operator=(const Animal &);
    virtual ~Animal(void);
    virtual void makeSound(void)const = 0;
    std::string getType(void) const;
};

#endif