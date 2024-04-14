/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:36:42 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/09 11:08:19 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Aform("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): Aform("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	this->setTarget(src.getTarget());
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	Aform::operator=(src);
	this->setTarget(src.getTarget());
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Aform("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	std::cout << "PresidentialPardonForm Constructor for target " << target << " called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Aform::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
