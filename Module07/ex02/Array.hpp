#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cctype>

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
	T &operator[](std::size_t index)
	{
		return arr[index];
	}
	~Array()
	{
		delete[] arr;
	}

	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "ArrayException: index out of bounds";
		}
	}

	unsigned int size() const
	{
		return n;
	}
};

#endif