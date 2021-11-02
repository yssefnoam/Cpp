#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &other) {
    operator=(other);
}

Brain& Brain::operator=(const Brain &other) {
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain died." << std::endl;
}