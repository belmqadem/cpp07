#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

#define RESET	    "\033[0m"
#define YELLOW	    "\033[33m"

template <typename T> void iter(T *array, int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

#endif