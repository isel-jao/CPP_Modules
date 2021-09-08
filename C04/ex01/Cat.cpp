#include "Cat.hpp"

Cat::Cat(): Animal(), brain(new Brain())
{
	cout << "a Cat was born" << endl;
	_type = "Cat";
}

Cat::Cat(Cat const &obj): brain(new Brain())
{
	cout << "a Cat was cloned" << endl;
	*this = obj;
}

Cat::~Cat()
{
	delete(brain);
	cout << "a cat died" << endl;
}


Cat& Cat::operator=(const Cat& obj)
{
    Animal::operator=(obj);
    _type = "Cat";

    if (this != &obj) {
       	*brain = *obj.brain;
    }

    return *this;
}

Brain *Cat::getBrain()
{
	return brain;
}

void Cat::makeSound(void) const
{
	cout << "Meoooowwwwwww!" << endl;
}