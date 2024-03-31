/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:39:22 by roberto           #+#    #+#             */
/*   Updated: 2024/03/18 11:25:44 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
}

Form::~Form()
{
}

Form::Form( std::string name, int gradeSign, int gradeExec) : _name(name),
 _gradeSign(gradeSign), _gradeExec(gradeExec), _sign(false)
{
	if (gradeSign < 1 || gradeExec < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if(gradeSign > 150 || gradeExec > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form &copy) : _name(copy._name), _gradeSign(copy._gradeSign),
_gradeExec(copy._gradeExec), _sign(copy._sign)
{
	if (_gradeSign < 1 || _gradeExec < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if(_gradeSign > 150 || _gradeExec > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form &Form::operator=(const Form &copy)
{
	this->_sign = copy._sign;
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->_name);
}

const bool &Form::getSign() const
{
	return (this->_sign);
}

const int &Form::getGradeSign() const
{
	return (this->_gradeSign);
}

const int &Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
	{
		this->_sign = true;
	}
	else
		throw GradeTooLowException();
}
