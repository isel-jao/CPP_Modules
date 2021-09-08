#include "Cat.hpp"

Cat::Cat() : Animal()
{
	cout << "a Cat was born" << endl;
	_type = "Cat";
}

Cat::Cat(Cat const &obj)
{
	cout << "a Cat was cloned" << endl;
	*this = obj;
}

Cat::~Cat()
{
	cout << "a cat died" << endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	Animal::operator=(obj);
	_type = "Cat";

	return *this;
}

void Cat::makeSound(void) const
{
	cout << "Meoooowwwwwww!" << endl;
}