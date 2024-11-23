#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
    private:
        T *array;
        unsigned int size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &);
        Array &operator=(Array const &);
        ~Array();
        T &operator[](unsigned int i);
        unsigned int getSize() const;
};

#endif
