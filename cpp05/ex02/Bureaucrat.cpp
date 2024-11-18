/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:37:28 by roberto           #+#    #+#             */
/*   Updated: 2024/11/18 15:34:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Aform.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	if (this->_grade < 1)
		throw GradeTooLowException();
	else if (this->_grade > 150)
		throw GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
//	this->_name = copy._name; al ser const no hace falta copiarlo
	this->_grade = copy._grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade = this->_grade - 1;
}

void Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade = this->_grade + 1;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::signForm(Aform &form) const
{
	if (form.getSign() == true)
	{
		std::cout << this->getName() << "couldn't sign the form because it's already signed" << std::endl;
	}
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << "signed form" << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << this->getName() << "couldn't sign form because "<< e.what() << std::endl;
		}
	}
}

void Bureaucrat::executeForm(Aform &form) const
{
	if (form.getSign() == false)
	{
		std::cout << this->getName() << "couldn't execute form because it's not signed" << std::endl;
	}
	else
	{
		try
		{
			form.execute(*this);
			std::cout << this->getName() << "executed" << form << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << this->getName() << "couldn't execute form because "<< e.what() << std::endl;
		}
	}
}
