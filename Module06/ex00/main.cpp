#include <iostream>
#include "Converter.hpp"
#include <string>
#include <cstdlib>

double ft_stod(std::string const &s);
float ft_stof(std::string const &s);

template <typename T>
void Converter::printConversion(T c) const
{
	printChar(static_cast<char>(c));
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
};

int main(int argc, char **argv)
{
	Converter scalcv;
	int type;

	if (argc != 2)
	{
		std::cerr << "Error arguments!\n";
		return 1;
	}
	type = scalcv.detectType(argv[1]);
	if (type == CHAR_TYPE)
		scalcv.printConversion(argv[1][0]);
	else if (type == INT_TYPE)
		scalcv.printConversion(atoi(argv[1]));
	else if (type == FLOAT_TYPE)
		scalcv.printConversion(ft_stof(argv[1]));
	else if (type == DOUBLE_TYPE)
		scalcv.printConversion(ft_stod(argv[1]));
	else if (type == FLOAT_PTYPE || type == DOUBLE_PTYPE)
		scalcv.printPseudoConversion(argv[1], type);
	else
		std::cerr << "Error: unknown literal\n";
	return 0;
}
