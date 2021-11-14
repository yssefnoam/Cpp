#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("fName", 72, 45), _target(target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getName(), other.getSigneGrade(), other.getExecuteGrade())
{
    this->_target = other._target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::formAction() const
{
    srand(time(NULL));
    std::cout << this->_target << " robotomized: " << ((rand() % 2) ? "success." : "failure.") << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat)
{
    if (this->getSigned() && bureaucrat.getGrade() <= this->getExecuteGrade())
        formAction();
    else if(!(this->getSigned()))
        throw Form::NotSigned();
    else
        throw Bureaucrat::GradeTooLowException();
}