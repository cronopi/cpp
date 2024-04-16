/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/16 15:37:29 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		std::string	_str;
		e_type	_type;

	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &src);

		void	GetChar(void) const;
		void	GetInt(void) const;
		void	GetFloat(void) const;
		void	GetDouble(void) const;
		void	GetString(void) const;
		
		char	SetChar(char c);
		int		SetInt(int i);
		float	SetFloat(float f);
		Double	SetDouble( double d);
		std::string	SetString(std::string str);

		void	GetType(void) const;
		e_type	SetType();

		bool	IsChar(void) const;
		bool	Isint(void) const;
		bool	IsFloat(void) const;
		bool	IsDouble(void) const;
		
		bool	PrintIsImposible(void) const;

		void	Printchar(void) const;
		void	Printint(void) const;
		void	PrintFloat(void) const;
		void	PrintDouble(void) const;


};