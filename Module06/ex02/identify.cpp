#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdexcept>
#include "identify.hpp"

using std::cout;

Base::~Base(void)
{
}

Base *generate(void)
{
	srand(time(0) - rand());

	int r = rand()  % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		cout << "A";

	else if (dynamic_cast<B *>(p))
		cout << "B";

	else if (dynamic_cast<C *>(p))
		cout << "C";
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		cout << "A";
	}
	catch (std::exception &e)
	{
	};

	try
	{
		(void)dynamic_cast<B &>(p);
		cout << "B";
	}
	catch (std::exception &e)
	{
	};

	try
	{
		(void)dynamic_cast<C &>(p);
		cout << "C";
	}
	catch (std::exception &e)
	{
	};

	cout << "\033[0m";
}
