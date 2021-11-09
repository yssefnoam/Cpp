#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat b("Test", 150);
        b.decrementGrade();
        // std::cout << b << "." << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
    return 0;
}