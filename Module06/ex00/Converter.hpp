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

void printChar(char c);
void printInt(int c);
void printFloat(float f);
void printDouble(double f);

class Converter
{

public:
	Converter(void);
	Converter(Converter const &obj);
	Converter &operator=(Converter const &obj);
	~Converter(void);

	bool isPseudoFloat(std::string const &s) const;
	bool isPseudoDouble(std::string const &s) const;

	int detectType(std::string const &literal) const;

	template <typename T>
	void printConversion(T c) const;
	void printPseudoConversion(std::string const &pseudo_TYPEeral, int type);
};

#endif
