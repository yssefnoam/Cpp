// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void my_callback(void* x) {
    std::cout << "the value is: " << reinterpret_cast<long>(x); // will probably compile
}

int main()
{
}