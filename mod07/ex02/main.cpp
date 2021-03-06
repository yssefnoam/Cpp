#include <iostream>
#include "Array.hpp"

struct Struct{};
int main(void)
{
    try{
        // Array<std::string> array(10);
        // for(int i=0; i< 10; i++)
        // {
        //     std::string &a = array[i];
        //     a = "i";
        // }
        Array<int> array(10);
        Array<int> array2(10);
        for(int i=0; i< 10; i++)
        {
            int &a = array[i];
            int &b = array2[i];
            a = 0;
            b = i + 1;
        }
        array2 = array;
        for(int i=0; i< 10; i++)
            std::cout << array2[i] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}