#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("0x00"), grade(0) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.name), grade(obj.grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
		grade = obj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::string const &Bureaucrat::getName(void) const
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (grade < 2)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}
void Bureaucrat::decrementGrade(void)
{
	if (grade > 149)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form &form) const
{
	if (this->grade > form.getSignGrade())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat {Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << "}";
	return (out);
}