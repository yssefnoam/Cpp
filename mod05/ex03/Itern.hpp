#ifndef INTER_HPP
#define INTER_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Inter
{
private:
    std::string _target;
    std::string _form;

public:
    Inter(void);
    Inter(const Inter &);
    Inter &operator=(const Inter &);
    ~Inter();
};

#endif