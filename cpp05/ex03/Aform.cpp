/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:39:22 by roberto           #+#    #+#             */
/*   Updated: 2024/03/18 11:25:44 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"

Aform::Aform( std::string name, int gradeSign, int gradeExec) : _name(name),
_sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
	{
		throw Aform::GradeTooHighException();
	}
	else if(gradeSign > 150 || gradeExec > 150)
	{
		throw Aform::GradeTooLowException();
	}
}

Aform::~Aform()
{
}

Aform::Aform(const Aform &copy) : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign),
_gradeExec(copy._gradeExec)
{
	if (_gradeSign < 1 || _gradeExec < 1)
	{
		throw Aform::GradeTooHighException();
	}
	else if(_gradeSign > 150 || _gradeExec > 150)
	{
		throw Aform::GradeTooLowException();
	}
}

Aform &Aform::operator=(const Aform &copy)
{
	this->_sign = copy._sign;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Aform &b)
{
	out << "Form: " << b.getName()
	<< ", sign: " << b.getSign()
	<< ", gradeSign: " << b.getGradeSign()
	<< ", gradeExec: " << b.getGradeExec()
	<< ", target: " << b.getTarget()
	<< std::endl;
	return (out);
}

const std::string &Aform::getName() const
{
	return (this->_name);
}

const bool &Aform::getSign() const
{
	return (this->_sign);
}

const int &Aform::getGradeSign() const
{
	return (this->_gradeSign);
}

const int &Aform::getGradeExec() const
{
	return (this->_gradeExec);
}

const std::string &Aform::getTarget() const
{
	return (this->_target);
}

void Aform::setTarget(const std::string &target)
{
	this->_target = target;
}

void Aform::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
	{
		this->_sign = true;
	}
	else
		throw GradeTooLowException();
}

const char *Aform::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Aform::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}
