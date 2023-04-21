#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template <class T> class Array {
	private:
		T *arr;
		unsigned int numele;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(Array const& src);
		Array &operator=(Array const& src);
		T &operator[](unsigned int index);
		unsigned int size();

	class IndexOutofbounds: public std::exception {
		public:
			const char* what() const throw() {
				return ("Out of Bounds index!!");
			}
	};
};

template <class T> Array<T>::Array() {
	this->arr = new T();
}

template <class T> Array<T>::~Array() {
	delete[] this->arr;
}

template <class T> Array<T>::Array(unsigned int n) {
	this->arr = new T[n]();
	this->numele = n;
}

template <class T> Array<T>::Array(const Array &f){
	this->numele = f.numele;
	this->arr = new T[f.numele];
	for (unsigned int i = 0; i < this->numele; i++)
		this->arr[i] = f.arr[i];
}

template <class T> Array<T> &Array<T>::operator=(Array const &f) {
	if (*this != f)
	{
		this->numele = f.numele;
		this->arr = new T[f.numele];
		for (unsigned int i = 0; i < this->numele; i++)
			this->arr[i] = f.arr[i];
	}
	return (*this);
}

template <class T> T& Array<T>::operator[](unsigned int index) {
	if (index >= this->numele)
		throw Array::IndexOutofbounds();
	return (this->arr[index]);
}

template <class T> unsigned int Array<T>::size() {
	return (this->numele);
}

#endif
