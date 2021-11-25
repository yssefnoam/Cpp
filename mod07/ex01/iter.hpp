#ifndef ITER_HPP
#define ITER_HPP

template<typename Add>
void    iter(Add *address, size_t length, void (*fun)(Add &))
{
    for (size_t i = 0; i < length; i++)
        fun(address[i]);
}

#endif