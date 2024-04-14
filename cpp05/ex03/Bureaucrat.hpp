/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:13:47 by roberto           #+#    #+#             */
/*   Updated: 2024/04/09 10:35:48 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Aform;
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);

		const std::string	getName() const;
		int					getGrade() const;

		void increment();
		void decrement();
		void signForm(Aform &form) const;
		void executeForm(Aform &form) const;

};
		std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif
