/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/08 14:54:07 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
   Bureaucrat javier("Javier", 1);
   Bureaucrat ana("Ana", 140);

   ShrubberyCreationForm form1("home");
   PresidentialPardonForm form2("home");
   RobotomyRequestForm form3("home");

   ana.executeForm(form1);

   javier.signForm(form1);
   ana.signForm(form1);

   ana.executeForm(form1);
   ana.executeForm(form2);

   javier.executeForm(form1);
   javier.executeForm(form2);


	return (0);
}
