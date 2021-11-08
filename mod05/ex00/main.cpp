#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat b("Bureaucrat", 150);
        b.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
    return 0;
}