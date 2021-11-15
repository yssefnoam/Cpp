#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
public:
    Intern(void);
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    ~Intern();

    Form *newForm(int, std::string);
    Form *makeForm(std::string, std::string);
};

#endif