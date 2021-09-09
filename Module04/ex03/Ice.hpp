
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public
	:
	Ice();
	virtual ~Ice();
	Ice(Ice const &obj);
	Ice &operator=(Ice const &);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif