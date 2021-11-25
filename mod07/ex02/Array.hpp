#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private:
    T *array;
    size_t _size;

public:
    Array()
    {
        array = NULL;
        this->_size = 0;
    };
    Array(unsigned int n)
    {
        this->_size = n;
        this->array = new T[this->_size];
        for (size_t i = 0; i < n; i++)
            array[i] = T();
    }
    Array(const Array &other)
    {
        this->_size = other._size;
        this->array = new T[this->_size];
        for (size_t i = 0; i < this->_size; i++)
            array[i] = other.array[i];
    }
    Array &operator=(const Array &other)
    {
        delete[] array;
        this->_size = other._size;
        this->array = new T[this->_size];
        for (size_t i = 0; i < this->_size; i++)
            array[i] = other.array[i];
        return *this;
    }
    T &operator[](size_t index) const
    {
        if (index > this->_size)
            throw OutOfLimits();
        return array[index];
    }
    ~Array() { delete[] array; }

    size_t size()
    {
        return this->_size;
    }

    class OutOfLimits : public std::exception
    {
        const char *what() const throw()
        {
            return "index out of limits";
        }
    };
};

#endif