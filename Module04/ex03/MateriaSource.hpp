#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "./IMateriaSource.hpp"
#include "./AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *inventory[4];
	int _Materia_count;

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource &operator=(MateriaSource const &obj);
	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
	void DeleteInventory();
};

#endif