/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:38:43 by roberto           #+#    #+#             */
/*   Updated: 2024/04/15 18:09:39 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{

}

Intern &Intern::operator=(const Intern &copy)
{
	return (*this);
}

Aform *Intern::make_presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Aform *Intern::make_shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Aform *Intern::make_robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Aform *Intern::makeform(std::string name, std::string target)
{
	Aform *recoger_formulario;
	int i;

	i = 0;
	t_form form[] =
	{
		{"shrubbery creation", &Intern::make_shrubbery},
		{"presidential pardon", &Intern::make_presidential},
		{"robotomy request", &Intern::make_robotomy}
	};

	while (i < 3)
	{
		if(form[i].name_compare == name)
		{
			recoger_formulario = (this->*form[i].makeform)(target);
		}
		i++;
	}
	if (i == 3)
		return (0);

	std::cout << "Intern creates " << recoger_formulario << std::endl;
	return (recoger_formulario);
}


