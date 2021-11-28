#include <iostream>
#include "span.hpp"
#define MAX 10000

int main(void)
{
    try{
        std::srand(time(NULL));
        Span sp = Span(MAX);
        for(int i = 0; i < MAX; i++)
        {
            sp.addNumber(std::rand() % MAX);
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e) {
        std::cout << "Error: "<< e.what() << std::endl;
    }
    return 0;
}

// clang++ -Wall -Wextra -Werror main.cpp span.cpp