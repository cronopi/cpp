/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:12:19 by roberto           #+#    #+#             */
/*   Updated: 2024/11/20 20:38:23 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{

   try
   {
      Bureaucrat javier("Javier", 1);
      Bureaucrat ana("Ana", 140);
      Intern intern;
      Aform *recoger_formulario = intern.makeform("robotomy request", "home");
/*    Aform *recoger_formulario = intern.makeform("shrubbery creation", "home");
      Aform *recoger_formulario = intern.makeform("presidential pardon", "ana");
      Aform *recoger_formulario = intern.makeform("fail_test", "home"); */

      javier.signForm(*recoger_formulario);
      javier.executeForm(*recoger_formulario);
      delete recoger_formulario;
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }


	return (0);
}
