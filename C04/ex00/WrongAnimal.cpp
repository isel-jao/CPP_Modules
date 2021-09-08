#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	cout << "an WrongAnimal was born" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	cout << "WrongAnimal was cloned" << endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "a WrongAnimal died" << endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
	(void)obj;
	_type = "WrongAnimal";

	return *this;
}

string WrongAnimal::getType(void) const
{
	return _type;
}

void WrongAnimal::makeSound(void) const
{
	cout << "some weird sound" << endl;
}
