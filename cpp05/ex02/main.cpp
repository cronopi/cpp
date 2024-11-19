/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/19 23:05:28 by roberto          ###   ########.fr       */
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

   ShrubberyCreationForm form1("hola");
   PresidentialPardonForm form2("ana");
   RobotomyRequestForm form3("home");

   javier.signForm(form1);
   javier.executeForm(form1);
   javier.signForm(form2);
   javier.signForm(form2);
   javier.executeForm(form2);
   ana.executeForm(form2);

   ana.signForm(form3);
   ana.executeForm(form3);
   javier.signForm(form3);
   javier.executeForm(form3);




	return (0);
}
