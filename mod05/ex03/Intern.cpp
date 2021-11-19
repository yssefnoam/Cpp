#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &) {}

Intern &Intern::operator=(const Intern &) { return *this; }

Intern::~Intern() {}

Form *Intern::newForm(int i, std::string target)
{
    switch (i)
    {
    case 0:
        return new RobotomyRequestForm(target);
    case 1:
        return new ShrubberyCreationForm(target);
    case 2:
        return new PresidentialPardonForm(target);
    }
    return NULL;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    std::string forms[3] = {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon",
    };

    for (int i = 0; i < 3; i++)
        if (formName == forms[i])
            return (newForm(i, target));
    std::cout << "There is no form with the name " << formName << std::endl;
    return NULL;
}