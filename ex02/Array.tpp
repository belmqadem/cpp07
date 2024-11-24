#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), size(0)
{
    std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), size(n)
{
    std::cout << "Array parameterized constructor called" << std::endl;
    for (unsigned int i = 0; i < n; i++)
    {
        array[i] = T();
    }
}

template <typename T>
Array<T>::Array(Array const &other) : array(new T[other.size]), size(other.size)
{
    std::cout << "Array copy constructor called" << std::endl;
    for (unsigned int i = 0; i < size; i++)
    {
        array[i] = other.array[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other)
{
    std::cout << "Array copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete[] array;
        array = new T[other.size];
        size = other.size;
        for (unsigned int i = 0; i < size; i++)
        {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Array destructor called" << std::endl;
    delete[] array;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= size)
    {
        throw std::out_of_range(RED "index out of bounds" RESET);
    }
    return array[i];
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= size)
    {
        throw std::out_of_range(RED "index out of bounds" RESET);
    }
    return array[i];
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return size;
}