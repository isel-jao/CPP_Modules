#include <iostream>

/*
////////////////////References vs Pointers///////////////

References are often confused with pointers but three major differences between references and pointers are:

		--> You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
		--> Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
		--> A reference must be initialized when it is created. Pointers can be initialized at any time.
*/

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
    
    std::string *p_str = &str;
    std::string &ref_str = str;

    std::cout << "Using pointer : " << *p_str << std::endl;
    std::cout << "Using reference : " << ref_str << std::endl;
	return (0);
}