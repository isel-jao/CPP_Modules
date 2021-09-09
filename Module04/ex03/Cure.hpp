
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(Cure const &obj);
	Cure &operator=(Cure const &);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif