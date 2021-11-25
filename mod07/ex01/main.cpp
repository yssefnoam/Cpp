#include <iostream>
#include "iter.hpp"

void ft(int &a)
{
    a++;
}

void printStr(std::string &str)
{
    std::cout << str << std::endl;
}

int main(void)
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    iter(arr, 10, ft);

    for (int i = 0; i < 10; i++)
        std::cout << arr[i] << " ";
    
    /* ---------------------------------------------- */

    std::string str[4] = {"hello", "world", "1337", "42"};

    iter(str, 4, printStr);

    return 0;
}