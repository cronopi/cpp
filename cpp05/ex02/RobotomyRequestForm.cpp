/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:28 by rcastano          #+#    #+#             */
/*   Updated: 2024/11/19 23:04:07 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Aform.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Aform("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): Aform("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	this->setTarget(src.getTarget());
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    Aform::operator=(src);
	this->setTarget(src.getTarget());
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Aform("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Constructor for target " << target << " called" << std::endl; //no debe imprimirse
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Aform::GradeTooLowException();
	else
	{
		srand(time(NULL));
		std::cout << "DRILLING NOISES" << std::endl;
		if (rand() % 2 == 1)
			std::cout << this->getTarget() << "has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
}
