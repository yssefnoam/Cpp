#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm(void);

    void    formAction(void);
    void    execute(Bureaucrat const &) const;
};

#endif