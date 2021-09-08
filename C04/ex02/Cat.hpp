#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(Cat const &obj);
	Cat &operator=(Cat const &obj);
	~Cat();

	Brain *getBrain();
	void makeSound(void) ;
};

#endif