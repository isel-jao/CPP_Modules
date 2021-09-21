#include "span.hpp"

Span::Span(unsigned int n) : n(n)
{
}

Span::Span(Span const &obj) : n(obj.n), data(obj.data)
{
}

Span &Span::operator=(Span const &obj)
{
	if (this == &obj)
		return *this;
	this->n = obj.n;
	this->data = obj.data;
	return *this;
}

Span::~Span(void) {}

char const *Span::FullException::what(void) const throw()
{
	return "Exception: Span is full!";
}
char const *Span::NoSpanFound::what(void) const throw()
{
	return "Exception: No Span Found!";
}

void Span::addNumber(int i)
{
	if (data.size() == n)
		throw FullException();
	data.push_back(i);
}

size_t Span::shortestSpan(void) const
{
	if (data.size() <= 1)
		throw NoSpanFound();
	size_t shortest_s;
	std::vector<int> tmp(data);
	std::sort(tmp.begin(), tmp.end());
	shortest_s = abs(tmp[0] - tmp[1]);
	for(int i = 2; i < tmp.size(); i++)
		if (shortest_s > abs(tmp[i - 1] - tmp[i]))
			shortest_s = abs(tmp[i - 1] - tmp[i]);
	return shortest_s;
}

size_t Span::longestSpan(void) const
{
	if (data.size() <= 1)
		throw NoSpanFound();
	std::vector<int> tmp(data);
	std::sort(tmp.begin(), tmp.end());
	return (abs(tmp[0] - tmp[tmp.size() - 1]));
}
