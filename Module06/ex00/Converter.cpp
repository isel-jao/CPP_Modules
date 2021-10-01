#include <cctype>
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Converter.hpp"

Converter::Converter(void) {}
Converter::Converter(Converter const &obj) { (void)obj; }
Converter &Converter::operator=(Converter const &obj)
{
	(void)obj;
	return *this;
}
Converter::~Converter(void) {}

bool Converter::isPseudoFloat(std::string const &s) const
{
	return (s == "nanf" || s == "+inff" || s == "-inff");
}

bool Converter::isPseudoDouble(std::string const &s) const
{
	return (s == "nan" || s == "+inf" || s == "-inf");
}

int Converter::detectType(std::string const &literal) const
{
	bool floatingPoint = false;
	if (literal.size() == 1 && isalpha(literal[0]))
		return CHAR_TYPE;
	if (isPseudoDouble(literal))
		return DOUBLE_PTYPE;
	if (isPseudoFloat(literal))
		return FLOAT_PTYPE;
	for (size_t i = 0; i != literal.size(); ++i)
	{
		if (!isdigit(literal[i]))
		{
			if ((literal[i] == '-' || literal[i] == '+') && i == 0)
				continue;
			else if (literal[i] == 'f' && i == literal.size() - 1 && isdigit(literal[i - 1]))
				return FLOAT_TYPE;
			else if (literal[i] == '.' && !floatingPoint && (i != 0 && i != literal.size() - 1))
			{
				floatingPoint = true;
				continue;
			}
			return NAN_TYPE;
		}
	}

	return floatingPoint ? DOUBLE_TYPE : INT_TYPE;
}

void printChar(char c)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << c << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void printInt(int c)
{
	std::cout << "int: " << static_cast<int>(c) << std::endl;
}

void printFloat(float f)
{
	std::cout << "float: ";
	std::cout << f;
	if (f == roundf(f))
		std::cout << ".0";
	std::cout << "f";
	std::cout << std::endl;
}

void printDouble(double f)
{
	std::cout << "double: ";
	std::cout << f;
	if (f == roundf(f))
		std::cout << ".0";
	std::cout << std::endl;
}

void Converter::printPseudoConversion(std::string const &p, int type)
{
	std::cout << "char: "
			  << "impossible\n";
	std::cout << "int: "
			  << "impossible\n";
	std::cout << ((type == FLOAT_PTYPE ? std::string("* ") : std::string("")) + "float: ") << (type == DOUBLE_PTYPE ? (p + "f") : p) << "\n";
	std::cout << ((type == DOUBLE_PTYPE ? std::string("* ") : std::string()) + "double: ") << (type == FLOAT_PTYPE ? (std::string(p).erase(p.size() - 1, 1)) : p) << "\n";
}

double ft_stod(std::string const &s)
{
	double d = 0.0;
	int sign = 1;
	size_t i = 0;

	if (s.size() != 0 && (s[i] == '+' || s[i] == '-'))
		if (s[i++] == '-')
			sign = -1;
	for (; i != s.size(); ++i)
		if (s[i] != '.')
			d = d * 10 + s[i] - 48;
	size_t floatingPointIndex = s.find('.');
	if (floatingPointIndex != std::string::npos)
		d /= pow(10, s.size() - 1 - floatingPointIndex);
	return d * sign;
}

float ft_stof(std::string const &s)
{
	std::string trimmed(s);
	size_t i = std::string::npos;

	if ((i = s.find('f')) != std::string::npos)
	{
		if (i != s.size() - 1)
			return 0.0f;
		trimmed.erase(i, 1);
	}

	return ft_stod(trimmed);
}
