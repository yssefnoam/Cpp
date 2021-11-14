#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm(void);

    void    formAction(void) const;
    void    execute(Bureaucrat const &);
};

#endif