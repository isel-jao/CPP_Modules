#ifndef IMATERIEASOURCE_HPP
#define IMATERIEASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};
#endif