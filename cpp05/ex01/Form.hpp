/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:10:42 by roberto           #+#    #+#             */
/*   Updated: 2024/11/08 14:52:52 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool 				_sign;
		const int 			_gradeSign;
		const int 			_gradeExec;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

	public:
		Form();
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);

		Form( std::string name, int gradeSign, int gradeExec);
		void beSigned( const Bureaucrat &bureaucrat);

		const std::string &getName() const;
		const bool &getSign() const;
		const int &getGradeSign() const;
		const int &getGradeExec() const;
};
		std::ostream &operator<<(std::ostream &out, const Form &b);

#endif
