#ifndef Cat_HPP
#define Cat_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *brain;

public:
    Cat(void);
    Cat(const Cat &);
    Cat &operator=(const Cat &);
    virtual ~Cat(void);
    void makeSound(void) const;
    Brain* getBrainAddress(void);
};

#endif