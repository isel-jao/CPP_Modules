#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombie_event;
	Zombie *zombie;

	zombie = new Zombie("Normal", "One");
	zombie->announce();
	delete zombie;

	zombie = zombie_event.newZombie("Two");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("Special");

	zombie = zombie_event.newZombie("Three");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("Chump");

	zombie = zombie_event.randomChump();
	delete zombie;

	return (0);
}
