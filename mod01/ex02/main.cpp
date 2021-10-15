#include <iostream>

int main(void)
{
    std::string String("HI THIS IS BRAIN");
    std::string *stringPTR = & String;
    std::string &stringREF = String;

    // display string address
    std::cout << &(String) << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    // display string
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}