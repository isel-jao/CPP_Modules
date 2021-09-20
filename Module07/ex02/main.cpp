#include "Array.hpp"
// #include <array>
#include <iostream>

int main()
{
	try
	{
		Array<int> arr;

		std::cout << arr[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}