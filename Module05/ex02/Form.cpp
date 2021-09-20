#include "./Form.hpp"

Form::Form():name("0x00"), _signed(false), signGrade(0), executeGrade(0) {}

Form::Form(std::string const &name, int const signGrade, int const executeGrade) : name(name), _signed(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &obj) : name(obj.name), _signed(obj._signed), signGrade(obj.signGrade), executeGrade(obj.executeGrade) {}

Form &Form::operator=(Form const &obj)
{
	if (this == &obj)
		return *this;
	_signed = obj._signed;
	return *this;
}

Form::~Form(void) {}

const char *Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char *Form::UnsignedFormException::what() const throw()
{
	return "FormException: Unsigned form can not be executed";
}

std::string const &Form::getName(void) const
{
	return name;
}

int Form::getSignGrade(void) const
{
	return signGrade;
}
int Form::getExecuteGrade(void) const
{
	return executeGrade;
}

bool Form::isSigned(void) const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "Form {Name: " << form.getName() << ", " << ((form.isSigned()) ? "Signed" : "Unsigned") << ", SignGade:" << form.getSignGrade() << ", ExecuteGrade:"
		<< form.getExecuteGrade() << "}";
	return (out);
}

void Form::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->executeGrade)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		throw Form::UnsignedFormException();
}