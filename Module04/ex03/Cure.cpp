#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	cout << "a Cure was created" << endl;
	_type = "Cure";
}

Cure::Cure(Cure const &obj)
{
	cout << "a Cure was cloned" << endl;
	*this = obj;
}

Cure::~Cure()
{
	cout << "a Cure was destroyed" << endl;
}

Cure &Cure::operator=(const Cure &obj)
{
	AMateria::operator=(obj);
	_type = "Cure";

	return *this;
}

AMateria *Cure::clone() const
{
	AMateria *mat = new Cure();
	return (mat);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}