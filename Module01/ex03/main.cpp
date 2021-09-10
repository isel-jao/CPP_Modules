#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde horde(6);
    horde.announce();

    ZombieHorde horde_invalid(-8);
    horde_invalid.announce();
}