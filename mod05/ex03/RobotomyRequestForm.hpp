#ifndef ROBOTO_MY_REQUEST_FORM_HPP
#define ROBOTO_MY_REQUEST_FORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &);
    ~RobotomyRequestForm(void);

    void    formAction(void) const;
    void    execute(Bureaucrat const &);
};

#endif