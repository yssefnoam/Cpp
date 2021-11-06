#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain class default constructor called." << std::endl;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain class copy constructor called." << std::endl;
    operator=(other);
}

Brain& Brain::operator=(const Brain &other) {
    std::cout << "Brain class assign operator called." << std::endl;
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain class destructor called." << std::endl;
}