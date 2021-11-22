#include <iostream>

struct Data{
    int a;
    int b;
    char c;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data data;
    data.a = 10;
    data.b = 20;
    data.c = 'c';

    std::cout << "--------------------" <<  std::endl;
    uintptr_t address = serialize(&data);
    std::cout << address << std::endl;
    std::cout << reinterpret_cast<uintptr_t>(&data) << std::endl;

    std::cout << *(reinterpret_cast<int*>(address)) <<  std::endl;
    std::cout << *(reinterpret_cast<int*>(address + 4)) <<  std::endl;
    std::cout << *(reinterpret_cast<char*>(address + 8)) <<  std::endl;

    std::cout << "--------------------" <<  std::endl;
    Data *ptr = deserialize(address);
    std::cout << ptr->a <<  std::endl;
    std::cout << ptr->b <<  std::endl;
    std::cout << ptr->c <<  std::endl;
    return 0;
}
