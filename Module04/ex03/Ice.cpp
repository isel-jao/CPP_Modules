#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	cout << "a Ice was created" << endl;
	_type = "Ice";
}

Ice::Ice(Ice const &obj)
{
	cout << "a Ice was cloned" << endl;
	*this = obj;
}

Ice::~Ice()
{
	cout << "a Ice destroyed" << endl;
}

Ice &Ice::operator=(const Ice &obj)
{
	AMateria::operator=(obj);
	_type = "Ice";

	return *this;
}

AMateria* Ice::clone() const
{
    AMateria    *materiaIce = new Ice();
    return (materiaIce);
};

void    Ice::use(ICharacter& target)
{
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}