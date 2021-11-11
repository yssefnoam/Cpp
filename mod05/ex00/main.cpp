#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat b("Test", 150);
        std::cout << b << "." << std::endl;
        b.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
    return 0;
}