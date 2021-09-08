#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

class WrongAnimal
{
protected:
	string _type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &obj);
	WrongAnimal &operator=(WrongAnimal const &obj);
	virtual ~WrongAnimal();

	void makeSound(void) const;
	string getType(void) const;
};

#endif