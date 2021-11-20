#include <iostream>

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: the programe needs 1 parameters." << std::endl;
        return 0;
    }
    std::string string = av[1];
    try
    {
        int num = std::stoi(string);
        if (std::isprint(num))
            std::cout << "char : " << "'" << static_cast<char>(num) << "'" << std::endl;
        else
            std::cout << "char : " << "Non displayable" << std::endl;
    }
    catch (...) {
        std::cout << "char : " << "impossible" << std::endl;
    }

    try
    {
        int num = std::stoi(string);
        std::cout << "int : " << num << std::endl;
    }
    catch (...) {
        std::cout << "int : " << "impossible" << std::endl;
    }

    try
    {
        float num = std::stof(string);
        float zero = static_cast<int>(num);
        if (zero == num)
            std::cout << "float : " << num << ".0f" << std::endl;
        else
            std::cout << "float : " << num << "f" << std::endl;
    }
    catch (...) {
        std::cout << "float : " << "nanf" << std::endl;
    }

    try
    {
        double num = std::stod(string);
        double zero = static_cast<int>(num);
        if (zero == num)
            std::cout << "double : " << num << ".0" << std::endl;
        else
            std::cout << "double : " << num << std::endl;
    }
    catch (...) {
        std::cout << "double : " << "nan" << std::endl;
    }
    return 0;
}