#include "functions.hpp"

std::string getInput(std::string prompt)
{
    std::string input;
    do
    {
        eofReached();
        printString(prompt, false);
        std::getline(std::cin, input);
    } while (!(std::cin) || std::cin.eof());
    return input;
}