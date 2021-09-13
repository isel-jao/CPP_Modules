#include "Intern.hpp"


Intern::Intern() {}

Intern::Intern(Intern const &obj) {(void)obj;}

Intern &Intern::operator=(Intern const &obj)
{
	(void)obj;
	return (*this);
}

Intern::~Intern(){}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "InternException: Form does not exist";
}


Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	static std::string const forms[3] = {
		"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"
	};
	Form *form;
	if(formName == forms[0])
		form = new PresidentialPardonForm(target);
	else if(formName == forms[1])
		form = new RobotomyRequestForm(target);
	else if(formName == forms[2])
		form = new ShrubberyCreationForm(target);
	else
		 throw Intern::FormDoesNotExistException();
	return (form);
}
