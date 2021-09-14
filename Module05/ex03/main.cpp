#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iomanip>
#include <sstream>

#define log(x) std::cout << std::setw(4) << __LINE__ << ": " << x << std::endl

int main()
{
	try
	{
		Intern someRandomIntern;
		Form *valid;
		Form *not_valid;
		Bureaucrat b("beurcrat", 40);
		valid = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		b.signForm(*valid);
		valid->execute(b);
		not_valid = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}