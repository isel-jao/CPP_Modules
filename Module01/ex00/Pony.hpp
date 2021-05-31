#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
public:
	Pony(const std::string& name);
	void					Eat(void);
	void					Sleep(void);

private:
		const std::string	name;
};

#endif