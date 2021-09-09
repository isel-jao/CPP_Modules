#include "AMateria.hpp"

AMateria::AMateria(string const &type) : _type(type)
{
	cout << "an AMateria was created" << endl;
}

AMateria::AMateria(AMateria const &obj)
{
	cout << "AMateria was cloned" << endl;
	*this = obj;
}

AMateria::~AMateria(void)
{
	cout << "an AMateria destroyed" << endl;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
	_type = obj._type;
	return *this;
}

string const &AMateria::getType() const
{
	return _type;
}

string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}