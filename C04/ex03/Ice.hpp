
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice();
	Ice(Ice const &obj);
	Ice &operator=(Ice const &obj);
	~Ice();

	virtual AMateria *clone() const;
};

#endif