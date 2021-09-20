#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cctype>
using std::exception;

template <typename T>
class Array
{
private:
	unsigned int n;
	T *arr;

public:
	Array(unsigned int n = 0) : n(n), arr(nullptr)
	{
		if (n != 0)
			arr = new T();
	}
	Array(Array &obj)
	{
		*this = obj;
	}
	Array &operator=(Array const &obj)
	{
		delete[] arr;
		n = obj.n;
		arr = new T[n];
		for (unsigned int i = 0; i < n; i++)
			arr[i] = obj.arr[i];
	}
	T &operator[](unsigned int index)
	{
		if (index >= n)
			throw Array::OutOfRange();
		return arr[index];
	}
	class OutOfRange : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "ArrayException: index out of range";
		}
	};
	~Array()
	{
		delete[] arr;
	}

	unsigned int size() const
	{
		return n;
	}
};



#endif