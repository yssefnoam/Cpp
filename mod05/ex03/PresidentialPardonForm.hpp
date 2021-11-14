#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &);
    ~PresidentialPardonForm(void);

    void    formAction(void) const;
    void    execute(Bureaucrat const &);
};

#endif