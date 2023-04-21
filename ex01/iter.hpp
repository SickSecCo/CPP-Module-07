#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void iter(T* array, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
    	(*f)(array[i]);
}

template <typename T> void print_t(const T& t)
{
	std::cout << t << std::endl;
}

#endif