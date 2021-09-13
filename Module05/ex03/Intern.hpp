#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
class Intern;
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern const &obj);
	Intern &operator=(Intern const &obj);
	virtual ~Intern();

	class FormDoesNotExistException: public std::exception {
		virtual const char* what() const throw();
	};


	Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif