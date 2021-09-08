#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

struct Brain
{
	static size_t const idea_count = 100;

	std::string ideas[idea_count];

	Brain();
	Brain(Brain const& obj);
	~Brain();

	Brain& operator=(Brain const& obj);
	std::string const &getIdea(size_t index) const;
	void setIdea(size_t index, std::string const &str);
};

#endif
