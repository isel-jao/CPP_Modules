#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <string>

#define NAN_TYPE -1
#define CHAR_TYPE 0
#define INT_TYPE 1
#define FLOAT_TYPE 2
#define DOUBLE_TYPE 3
#define FLOAT_PTYPE 4
#define DOUBLE_PTYPE 5
#define TOTAL_LI 6

std::ostream &printChar(std::ostream &os, char c);
std::ostream &printFloat(std::ostream &os, float f);
std::ostream &printDouble(std::ostream &os, float f);

class Converter
{

public:
	Converter(void);
	Converter(Converter const &obj);
	Converter &operator=(Converter const &obj);
	~Converter(void);

	bool isPseudoDouble(std::string const &s) const;
	bool isPseudoFloat(std::string const &s) const;

	int detectType(std::string const &literal) const;

	template <typename T>
	void printConversion(T c) const;
	void printPseudoConversion(std::string const &pseudo_TYPEeral, int type);
};

template <typename T>
void Converter::printConversion(T c) const
{
	std::cout << "char: ";
	printChar(std::cout, static_cast<char>(c)) << "\n";
	std::cout << "int: " << static_cast<int>(c) << "\n";
	std::cout << "float: ";
	printFloat(std::cout, static_cast<float>(c)) << "\n";
	std::cout << "double: ";
	printDouble(std::cout, static_cast<double>(c)) << "\n";
};

#endif
