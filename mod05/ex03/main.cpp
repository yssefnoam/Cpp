#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try{
        Bureaucrat b("bName", 2);
        std::cout << b << std::endl;
        ShrubberyCreationForm scf("ynoam");
        // PresidentialPardonForm scf("ynoam");
        // RobotomyRequestForm scf("ynoam");
        scf.beSigned(b);
        scf.execute(b);
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
   
    return 0;
}