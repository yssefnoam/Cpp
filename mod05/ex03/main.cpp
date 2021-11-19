#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat b("bName", 1);
        Intern someRandomIntern;
        Form *rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            rrf->beSigned(b);
            rrf->execute(b);
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "." << std::endl;
    }

    return 0;
}