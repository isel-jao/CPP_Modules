#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("0x00", 0, 0), target("0x00") {}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Shrubbery Creation", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form(obj), target(obj.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	(void)obj;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}