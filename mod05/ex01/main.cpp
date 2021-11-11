#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try{
        Bureaucrat b("bName", 1);
        std::cout << b << std::endl;
        Form f("fName", 1, 20);
        std::cout << f << std::endl;
        f.beSigned(b);
    }
    catch (std::exception &e)
    {
        std::cout << "ERROR: " << e.what() << "." << std::endl;
    }
    return 0;
}