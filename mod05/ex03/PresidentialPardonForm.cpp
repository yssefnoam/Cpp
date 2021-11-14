
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("fName", 25, 5), _target(target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other.getName(), other.getSigneGrade(), other.getExecuteGrade())
{
    this->_target = other._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::formAction() const
{
    std::cout <<this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat)
{
    if (this->getSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
        formAction();
    else if(!(this->getSigned()))
        throw Form::NotSigned();
    else
        throw Bureaucrat::GradeTooLowException();
}