#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(const int size);
	~ZombieHorde(void);

	void announce(void) const;

private:
	const int Size;
	Zombie *Hord;
};

#endif