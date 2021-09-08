#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	cout << "an Animal was born" << endl;
}

Animal::Animal(Animal const &obj)
{
	cout << "Animal was cloned" << endl;
	*this = obj;
}

Animal::~Animal(void)
{
	cout << "an Animal died" << endl;
}

Animal &Animal::operator=(Animal const &obj)
{
	(void)obj;
	_type = "Animal";

	return *this;
}

string Animal::getType(void) const
{
	return _type;
}
