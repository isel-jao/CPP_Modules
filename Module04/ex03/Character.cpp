#include "./Character.hpp"

using std::cout;
using std::endl;
using std::string;

Character::Character(string name) : _Name(name), _Materia_count(0)
{
	for(int i = 0; i < 4 ; i++)
		inventory[i] = NULL;
	cout << "a Character was creatd" << endl;
}

Character::Character(Character const &obj)
{
	cout << "a Character was copied" << endl;
	*this = obj;
}

Character &Character::operator=(Character const &obj)
{
	DeleteInventory();
	this->_Name = obj._Name;
	this->_Materia_count = obj._Materia_count;
	for (int i = 0; i < obj._Materia_count; i++)
		inventory[i] = obj.inventory[i]->clone();
	return (*this);
}

Character::~Character()
{
	DeleteInventory();
	cout << "a Character was destroid" << endl;
}

string const &Character::getName() const
{
	return (this->_Name);
}

void Character::equip(AMateria *m)
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

void Character::unequip(int idx)
{
	if (idx < 0 || idx > _Materia_count)
	{
		cout << "idx not found" << endl;
		return;
	}
	cout << "unequip" << endl;
	delete inventory[idx];
	for (int i = idx + 1; i < _Materia_count - 1; i++)
		this->inventory[i] = this->inventory[i + 1];
	this->_Materia_count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= _Materia_count)
	{
		cout << _Materia_count << " not enouph" << endl;
		return;
	}
	this->inventory[idx]->use(target);
}

void Character::DeleteInventory()
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
