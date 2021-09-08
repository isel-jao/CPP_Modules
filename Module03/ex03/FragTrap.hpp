#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string const &name = "0x00");
	FragTrap(FragTrap const &obj);

	FragTrap &operator=(FragTrap const &obj);

	~FragTrap(void);

	void highFiveGuys(void) const;
};

#endif
