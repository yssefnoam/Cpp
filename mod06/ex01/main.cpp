#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data data;
    serialize(&data);
    deserialize()
    // int *a = reinterpret_cast<int*>(&data);
    // std::cout << a << std::endl;
    return 0;
}