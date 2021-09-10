#ifndef ZOMBIEVENT_HPP
#define ZOMBIEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;

public:
	ZombieEvent(void);

	void setZombieType(const std::string &type);
	Zombie *newZombie(const std::string &name);
	Zombie *randomChump(void);
};

#endif