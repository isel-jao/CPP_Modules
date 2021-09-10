#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	const int Size;
	Zombie *Horde;

public:
	ZombieHorde(const int size);
	~ZombieHorde(void);

	void announce(void) const;
};

#endif