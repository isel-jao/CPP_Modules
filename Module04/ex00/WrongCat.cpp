#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	cout << "a WrongCat was born" << endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj)
{
	cout << "a WrongCat was cloned" << endl;
	*this = obj;
}

WrongCat::~WrongCat()
{
	cout << "a Wrongcat died" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	WrongAnimal::operator=(obj);
	_type = "WrongCat";

	return *this;
}

void WrongCat::makeSound(void) const
{
	cout << "Meoooowwwwwww noooooooooot!" << endl;
}