#include "./MateriaSource.hpp"

using std::cout;
using std::endl;
using std::string;

MateriaSource::MateriaSource() :  _Materia_count(0)
{
	for(int i = 0; i < 4 ; i++)
		inventory[i] = NULL;
	cout << "a MateriaSource was creatd" << endl;
}

// MateriaSource::MateriaSource(MateriaSource const &obj)
// {
// 	if (*this == obj)
// 		return;
// 	cout << "a MateriaSource was copied" << endl;
// 	*this = obj;
// }

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
	DeleteInventory();
	this->_Materia_count = obj._Materia_count;
	for (int i = 0; i < obj._Materia_count; i++)
		inventory[i] = obj.inventory[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource()
{
	DeleteInventory();
	cout << "a MateriaSource was destroid" << endl;
}


void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	if (_Materia_count > 3)
	{
		cout << "full inventory!" << endl;
		return;
	}
	this->inventory[_Materia_count] = m->clone();
	_Materia_count++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_Materia_count; i++)
		if (type == this->inventory[i]->getType())
			return (this->inventory[i]->clone());
	return (0);
}

void MateriaSource::DeleteInventory()
{
	for (int i = 0; i < this->_Materia_count; i++)
	{
		if (this->inventory[i])
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
	_Materia_count = 0;
}
