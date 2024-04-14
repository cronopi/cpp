/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:10:42 by roberto           #+#    #+#             */
/*   Updated: 2024/04/09 10:40:26 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"
class Aform
{
	private:
		const std::string _name;
		bool _sign;
		const int _gradeSign;
		const int _gradeExec;
		std::string _target;

	protected:
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};

	public:
		Aform();
		virtual ~Aform();
		Aform(const Aform &copy);
		Aform &operator=(const Aform &copy);
		Aform( std::string name, int gradeSign, int gradeExec);


		const std::string &getName() const;
		const bool &getSign() const;
		const int &getGradeSign() const;
		const int &getGradeExec() const;
		const std::string &getTarget() const;

		void setTarget(const std::string &target);

		void beSigned( const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

};
	std::ostream &operator<<(std::ostream &out, const Aform &b);

#endif
