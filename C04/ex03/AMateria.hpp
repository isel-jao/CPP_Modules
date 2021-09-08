#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class AMateria
{
protected:
	string _type;

public:
	AMateria(string const &type);
	AMateria(AMateria const &obj);
	AMateria &operator=(AMateria const &obj);
	~AMateria();

	string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif