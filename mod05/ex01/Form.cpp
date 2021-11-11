#include "Form.hpp"

Form::Form(std::string name, int sGrade, int eGrade) : _name(name), _signedGrade(sGrade), _executedGrade(eGrade)
{
    this->_signed = false;
    if (sGrade > 150)
        throw GradeTooLowException();
    else if (sGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &other) : _name(other._name), _signedGrade(other._signedGrade), _executedGrade(other._executedGrade) { this->_signed = false; }

Form &Form::operator=(const Form &other)
{
    if (this != &other)
        this->_signed = other._signed;
    return *this;
}

Form::~Form(void) {}

const char *Form::GradeTooLowException::what() const throw() { return "Form GradeTooLowException"; }

const char *Form::GradeTooHighException::what() const throw() { return "Form GradeTooHighException"; }

std::string Form::getName(void) const { return this->_name; }

int Form::getSigneGrade(void) const { return this->_signedGrade; }

int Form::getExecuteGrade(void) const { return this->_executedGrade; }

bool Form::getSigned(void) const { return this->_signed; }

void Form::beSigned(const Bureaucrat &reference)
{
    if (reference.getGrade() > this->getSigneGrade())
    {
        reference.signForm(*this);
        throw GradeTooLowException();
    }
    else
    {
        this->_signed = true;
        reference.signForm(*this);
    }
}

std::ostream &operator<<(std::ostream &stream, const Form &other)
{
    stream << "Form " << other.getName();
    stream << ", signed grade " << other.getSigneGrade();
    stream << ", executed grade " << other.getExecuteGrade();
    stream << ", signe state " << (other.getSigned() ? "true." : "false.");
    return stream;
}
