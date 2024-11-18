/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:39:22 by roberto           #+#    #+#             */
/*   Updated: 2024/11/08 14:52:22 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()  : _gradeSign(0), _gradeExec(0)
{
}

Form::~Form()
{
}

Form::Form( std::string name, int gradeSign, int gradeExec) : _name(name),  _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
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

Form::Form(const Form &copy) : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
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

const char*	Form::GradeTooLowException::what() const throw() {
	return "grade too low!";
}

const char*	Form::GradeTooHighException::what() const throw() {
	return "grade too high!";
}

std::ostream&	operator<<(std::ostream &out, const Form& form)
{
	out	<< std::boolalpha << "Form: " << form.getName() << ", signed: " << form.getSign() << ", grade to sign " << form.getGradeSign()<< ", grade to execute " << form.getGradeExec() << std::endl;
	return (out);
}
