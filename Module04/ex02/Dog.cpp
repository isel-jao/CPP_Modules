#include "Dog.hpp"

Dog::Dog(): Animal(), brain(new Brain())
{
	cout << "a Dog was born" << endl;
	_type = "Dog";
}

Dog::Dog(Dog const &obj): brain(new Brain())
{
	cout << "a Dog was cloned" << endl;
	*this = obj;
}

Dog::~Dog()
{
	delete(brain);
	cout << "a Dog died" << endl;
}


Dog& Dog::operator=(const Dog& obj)
{
    Animal::operator=(obj);
    _type = "Dog";

    if (this != &obj) {
       	*brain = *obj.brain;
    }

    return *this;
}

void Dog::makeSound(void) 
{
	cout << "woof! woof!" << endl;
}