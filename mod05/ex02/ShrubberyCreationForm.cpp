#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("fName", 145, 137), _target(target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        this->_target = other._target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.getSigneGrade(), other.getExecuteGrade()) {
    this->_target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::formAction()
{
}

void ShrubberyCreationForm::excecute(Bureaucrat const &bureaucrat) const
{
    // ShrubberyCreationForm a;
    // a.getExecuteGrade();
}