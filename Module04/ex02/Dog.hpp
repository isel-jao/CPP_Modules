#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &obj);
	Dog &operator=(Dog const &obj);
	~Dog();

	void makeSound(void) ;
};

#endif