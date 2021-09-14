#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const name;
	int grade;

	Bureaucrat();
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &obj);
	Bureaucrat &operator=(Bureaucrat const &obj);
	virtual ~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	std::string const &getName(void) const;
	int getGrade(void) const;
	void setGrade(int grade);

	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
