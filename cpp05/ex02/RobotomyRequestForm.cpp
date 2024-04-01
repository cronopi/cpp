/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:28 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/01 16:00:40 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): Aform("ShrubberyCreationForm", 145, 137), _target(src._target)
{
    std::cout << "RobotomyRequestForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;

	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    Aform::operator=(src);
	this->_target = src._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	std::cout << "RobotomyRequestForm Constructor for target " << target << " called" << std::endl; //no debe imprimirse

}
