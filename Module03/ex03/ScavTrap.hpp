#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"


class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(std::string const& name = "0x00");
		ScavTrap(ScavTrap const& obj);

		ScavTrap &operator=(ScavTrap const &obj);

		virtual ~ScavTrap();
		
		void 	attack(const std::string &target) const;
		void	guardGate(void) const;
};

#endif
