#include "Bureaucrat.hpp"
#include <iomanip>
#include <sstream>

#define log(x) std::cout << std::setw(4) << __LINE__ << ": " << x << std::endl

int main()
{
	log("testing in range grade");
	try
	{
		Bureaucrat b("in_range", 15);
		log(b);
		b.decrementGrade();
		log(b);
		b.incrementGrade();
		b.incrementGrade();
		log(b);
		b.setGrade(1);
		log(b);
		try
		{
			b.incrementGrade();
			log(b);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		b.setGrade(150);
		log(b);
		b.decrementGrade();
		log(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	log("testing to low grade");
	try
	{
		Bureaucrat b("to_lwo", 180);
		log(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	log("testing to hight grade");
	try
	{
		Bureaucrat b("to_high", 0);
		log(b);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat b("hi", 151);
	log(b);
}