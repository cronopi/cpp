/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:38:43 by roberto           #+#    #+#             */
/*   Updated: 2024/11/19 14:38:42 by roberto          ###   ########.fr       */
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
	(void)copy;
	return;
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
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

const char *Intern::FormNotFoundException::what() const throw()
{
    return "No se encontró una coincidencia para el formulario";
}

Aform *Intern::makeform(std::string name, std::string target)
{
	Aform *recoger_formulario;
	int i;

	i = 0;
	recoger_formulario = NULL;
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
			std::cout << "Intern creates " << name << std::endl;
			return (recoger_formulario);
		}
		i++;
	}
	throw FormNotFoundException();
	return (recoger_formulario);
}


