#include <iostream>
#include "Karen.hpp"

int main(void)
{
    Karen karen;

    karen.complain("info");
    karen.complain("lkjlkj");

    karen.complain("ERROR");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("DEBUG");

    return 0;
}