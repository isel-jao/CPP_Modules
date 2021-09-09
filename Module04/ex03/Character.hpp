#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "./ICharacter.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter
{
private:
	string _Name;
	AMateria *inventory[4];
	int _Materia_count;

public:
	Character(string name = "0x00");
	Character(Character const &obj);
	Character &operator=(Character const &obj);
	~Character();

	virtual string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
	void DeleteInventory();
};

#endif