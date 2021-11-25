#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
    T *array;
    size_t size;

public:
    Array()
    {
        this->size = 0;
    };
    Array(unsigned int n)
    {
        this->array = new T[n];
        this->size = n;
    }
    Array(const Array &)
    {
    }
    Array& operator=(const Array &)
    {
    }
    ~Array() {delete [] array;}
};

#endif