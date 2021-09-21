#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack const &obj)
	{
		*this = obj;
	}
	MutantStack &operator=(MutantStack const &obj)
	{
		std::stack<T>::operator=(obj);
	}
	~MutantStack(void) {}

	iterator begin(void)
	{
		return this->c.begin();
	}
	iterator end(void)
	{
		return this->c.end();
	}
};

#endif
