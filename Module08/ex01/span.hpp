#ifndef SPAN_HPP
# define SPAN_HPP
# include <stdexcept>
# include <vector>
# include <iostream>
#include <algorithm>
#include <math.h>
class Span
{
	unsigned int n;
	std::vector<int> data;

	public:

		Span(unsigned int n = 0);
		Span(Span const & obj);
		Span & operator=(Span const & obj);
		~Span(void);

		class FullException: public std::exception
		{
			char const * what(void) const throw();
		};
		class NoSpanFound: public std::exception
		{
			char const * what(void) const throw();
		};

		void addNumber(int i);

		size_t shortestSpan(void) const;
		size_t longestSpan(void) const;

		std::vector<int> const & getInternalData(void) const;
		std::ostream & printSorted(std::ostream & os);
};

#endif
