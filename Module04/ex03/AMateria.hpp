#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"


using std::cout;
using std::endl;
using std::string;


class ICharacter;

class AMateria
{
protected:
	string _type;

public:
	AMateria(string const &type = "0x00");
	AMateria(AMateria const &obj);
	AMateria &operator=(AMateria const &obj);
	virtual ~AMateria();

	string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif