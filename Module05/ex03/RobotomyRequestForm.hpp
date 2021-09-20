#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <fstream>
#include <stdlib.h>
class RobotomyRequestForm;
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string const target;

	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;

};

#endif
