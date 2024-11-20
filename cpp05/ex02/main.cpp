/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/20 20:26:03 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
	{
        Bureaucrat javier("Javier", 1);
        ShrubberyCreationForm form1("core");

        javier.signForm(form1);
        javier.executeForm(form1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
        Bureaucrat javier("Javier", 1);
        Bureaucrat ana("Ana", 140);
        PresidentialPardonForm form2("everyone");

        javier.signForm(form2);
        javier.signForm(form2);
        javier.executeForm(form2);
        ana.executeForm(form2);
        javier.executeForm(form2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    try
	{
        Bureaucrat ana("Ana", 140);
        Bureaucrat javier("Javier", 1);
        RobotomyRequestForm form3("home");

        ana.signForm(form3);
        ana.executeForm(form3);
        javier.signForm(form3);
        javier.executeForm(form3);

	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
