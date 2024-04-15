/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:34:46 by roberto           #+#    #+#             */
/*   Updated: 2024/04/15 18:01:37 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Aform.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

	typedef struct s_form
	{
		std::string name_compare;
		Aform *(Intern::*makeform)(std::string target);
	}				t_form;
public:
	Intern();
	~Intern();
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);

	Aform *makeform(std::string name, std::string target);
	Aform *make_presidential(std::string target);
	Aform *make_shrubbery(std::string target);
	Aform *make_robotomy(std::string target);
};

#endif
