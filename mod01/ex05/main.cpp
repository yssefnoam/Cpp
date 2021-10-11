#include <iostream>
#include "Karen.hpp"

int main(void)
{
    Karen karen;

    karen.complain("ERROR");
    karen.complain("INFO");
    karen.complain("info");
    karen.complain("WARNING");
    karen.complain("DEBUG");
    karen.complain("lkjlkj");

    return 0;
}