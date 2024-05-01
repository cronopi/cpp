/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/01 16:18:21 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>




class ScalarConverter
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;


	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &src);

		char	GetChar(void) const;
		int		GetInt(void) const;
		float	GetFloat(void) const;
		double	GetDouble(void) const;

		static void convert(std::string literal);
};
		int	IsChar(std::string literal);
		int	IsInt(std::string literal);
		int	IsFloat(std::string literal, int number);
		int	IsDouble(std::string literal, int number);


		void	PrintChar(std::string literal);
		void	PrintInt(std::string literal);
		void	PrintFloat(std::string literal);
		void	PrintDouble(std::string literal);

#endif
