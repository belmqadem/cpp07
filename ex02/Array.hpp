#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

#define RESET	"\033[0m"
#define RED		"\033[31m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"

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

#include "Array.tpp"

#endif
