#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try{
        Bureaucrat b("bName", 2);
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
    return 0;
}