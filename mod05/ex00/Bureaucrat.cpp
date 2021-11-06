#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) {
    if (grade > 150)
        GradeTooLowException();
    else if (grade < 1)
        GradeTooHighException();
}

void    GradeTooLowException() {}
void    GradeTooHighException() {}
Bureaucrat::~Bureaucrat(void) {}

int Bureaucrat::getGrade(void){
    return this->grade;
}

std::string Bureaucrat::getName(void){
    return this->name;
}