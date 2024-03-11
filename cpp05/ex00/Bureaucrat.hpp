/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:13:47 by roberto           #+#    #+#             */
/*   Updated: 2024/03/11 11:21:28 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		int			getGrade() const;

		void increment();
		void decrement();

};

#endif
