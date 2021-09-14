
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
class ShrubberyCreationForm;
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const target;
	static std::string const tree_data[2];

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &obj);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
	virtual ~ShrubberyCreationForm();

	class TargetFileOpenException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class WriteException : public std::exception
	{
		virtual const char *what() const throw();
	};

	void execute(Bureaucrat const &executor) const;
};

#endif
