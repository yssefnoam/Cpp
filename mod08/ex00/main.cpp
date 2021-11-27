#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{
    // std::vector<int> v;
    std::list<int> v;
    v.push_back(10);
    v.push_back(16);
    v.push_back(18);
    v.push_back(200);
    v.push_back(1900);
    v.push_back(1);
    v.push_back(41);

    if (easyfind(v, 1))
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;

    return 0;
}
// clang++ -Wall -Wextra -Werror -std=c++98 main.cpp && ./a.out