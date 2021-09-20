#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("0x00", 0, 0), target("0x00") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Shrubbery Creation", 72, 45), target(target)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form(obj), target(obj.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	(void)obj;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "* tjjjjjjjjjjj vrrrrrrrrrrrrrr *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomization is a failure" << std::endl;
}
