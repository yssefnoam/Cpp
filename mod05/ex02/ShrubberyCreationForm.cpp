#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("fName", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        this->_signed = other.getSigned();
        this->_target = other.getTarget();
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other._name, other._signedGrade, other._executedGrade, other._target)
{
    this->_signed = false;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::formAction()
{
}

void ShrubberyCreationForm::excecute(Bureaucrat const &bureaucrat) const
{
    ShrubberyCreationForm a;
    a.getExecuteGrade();
}