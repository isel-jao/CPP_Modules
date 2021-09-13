#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iomanip>
#include <sstream>

#define log(x) std::cout << std::setw(4) << __LINE__ << ": " << x << std::endl

int main()
{
	try
	{
		Bureaucrat b1("bureacrat1", 5);
		Bureaucrat b2("bureacrat1", 25);
		ShrubberyCreationForm s("sform");
		RobotomyRequestForm r("rfomr");
		PresidentialPardonForm p("pform");
		s.beSigned(b1);
		r.beSigned(b1);
		p.beSigned(b1);
		p.beSigned(b2);

		s.execute(b1);
		r.execute(b1);
		p.execute(b1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}