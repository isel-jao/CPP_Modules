#include "./Form.hpp"

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

const char *Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
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
	if (_signed == true)
		throw Form::FormAlreadySignedException();
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