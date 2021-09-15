#ifndef converter_HPP
#define INTERPRETER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>
class converter;

#define CHAR_TYPE 1
#define INT_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4
#define WRONG_TYPE 5

class converter
{
private:
	std::string str;
	int type;
	long double value;
	converter();
	void parse();

public:
	converter(std::string const &value);
	converter(converter const &other);
	converter &operator=(converter const &other);
	virtual ~converter();
};

#endif