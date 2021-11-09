#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();

    this->grade = grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}

Bureaucrat::~Bureaucrat(void) {}

int Bureaucrat::getGrade(void)
{
    return this->grade;
}

std::string Bureaucrat::getName(void)
{
    return this->name;
}

void Bureaucrat::incrementGrade(void)
{
    this->grade--;
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
}