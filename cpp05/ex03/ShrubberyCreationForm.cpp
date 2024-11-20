/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:28:05 by rcastano          #+#    #+#             */
/*   Updated: 2024/11/20 23:18:36 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Aform("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Aform("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	this->setTarget(src.getTarget());
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	Aform::operator=(src);
	this->setTarget(src.getTarget());
	return (*this);
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Aform("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	std::cout << "ShrubberyCreationForm Constructor for target " << target << " called" << std::endl; //no debe imprimirse
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Aform::GradeTooLowException();

	std::ofstream file;
	std::stringstream name;
	name << this->getTarget() << "_shrubbery";

	file.open(name.str().c_str());

	for (int i = 0; i < 5; i++)
	{
		file <<
		"         v" << std::endl <<
		"        >X<" << std::endl <<
		"         A" << std::endl <<
		"        d$b" << std::endl <<
		"      .d\\$$b." << std::endl <<
		"    .d$i$$\\$$b." << std::endl <<
		"       d$$@b" << std::endl <<
		"      d\\$$$ib" << std::endl <<
		"    .d$$$\\$$$b" << std::endl <<
		"  .d$$@$$$$\\$$ib." << std::endl <<
		"      d$$i$$b" << std::endl <<
		"     d\\$$$$@$b" << std::endl <<
		"  .d$@$$\\$$$$$@b." << std::endl <<
		" ******************" << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
		std::endl;
	}
	file.close();
}
