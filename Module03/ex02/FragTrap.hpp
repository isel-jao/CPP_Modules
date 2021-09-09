#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"


class FragTrap:  public ClapTrap {
	public:
		FragTrap(string const& name = "0x00");
		FragTrap(FragTrap const &obj);

		FragTrap& operator=(FragTrap const &obj);

		virtual ~FragTrap(void);
		
		void	highFiveGuys(void) const;
};

#endif
