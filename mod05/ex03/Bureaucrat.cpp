#include "Bureaucrat.hpp"
class Form;

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();

    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void) {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

std::string Bureaucrat::getName(void) const
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

void Bureaucrat::signForm(const Form &form) const
{
    if (this->getGrade() <= form.getSigneGrade())
        std::cout << this->getName() << " signs " << form.getName() << "." << std::endl;
    else
        std::cout << this->getName() << " cannot signs " << form.getName() << " because the grade of " << this->getName() << " is low." << std::endl;
}

void    Bureaucrat::executeForm(Form const &form)
{
    if (form.getSigned() && this->getGrade() <= form.getExecuteGrade())
        std::cout << this->name << " executes " << form.getName() << "." << std::endl;
    else
        std::cout << this->name << " can't executes " << form.getName() << ", because " << (form.getSigned() ? "the from not signed" : "the grade of the bureaucrat is to low")<< "." <<  std::endl;
}

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &other)
{
    stream << "Bureaucrat " << other.getName() << ", bureaucrat grade " << other.getGrade();
    return stream;
}