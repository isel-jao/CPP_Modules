#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

class Animal
{
protected:
	string _type;

public:
	Animal();
	Animal(Animal const &obj);
	Animal &operator=(Animal const &obj);
	virtual ~Animal();

	virtual void makeSound(void) = 0;
	string getType(void) const;
};

#endif