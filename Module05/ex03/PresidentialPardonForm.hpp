#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <fstream>
class PresidentialPardonForm;
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string const target;

	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &obj);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;

};

#endif
