#include "Dog.hpp"

Dog::Dog() : Animal()
{
	cout << "a Dog was born" << endl;
	_type = "Dog";
}

Dog::Dog(Dog const &obj)
{
	cout << "a Dog was cloned" << endl;
	*this = obj;
}

Dog::~Dog()
{
	cout << "a Dog died" << endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	_type = "Dog";

	return *this;
}

void Dog::makeSound(void) const
{
	cout << "Woof! Woof!!" << endl;
}