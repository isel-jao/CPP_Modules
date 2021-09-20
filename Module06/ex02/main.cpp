#include <iostream>
#include <cstdlib>
#include "identify.hpp"

using std::cout;

int main()
{

	for (int i = 0; i < 10; ++i) {
		Base *b = generate();

		identify(b);
		std::cout << "\t";
		identify(*b);
		cout << "\n";

		delete b;
	}

	return 0;
}
