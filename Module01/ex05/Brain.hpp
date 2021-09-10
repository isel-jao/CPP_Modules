#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
private:
	int			IQ;

public:
	Brain(void);

	int			GetIQ(void) const;
	std::string	identify(void) const;
};

#endif