/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/04 12:23:33 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <iomanip>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &src);
	public:

		static void convert(std::string literal);
};
	int		IsChar(std::string literal);
	int		IsInt(std::string literal);
	int		IsFloat(std::string literal, int number);
	int		IsDouble(std::string literal, int number);


	void	PrintChar(char c);
	void	PrintInt(int i);
	void	PrintFloat(std::string literal);
	void	PrintDouble(std::string literal);

	char	ConvertToChar(std::string literal);
	int		ConvertToInt(std::string literal);
	float	ConvertToFloat(std::string literal);
	double	ConvertToDouble(std::string literal);

	float	doubletofloat(double d);
	int		doubletoint(double d);
	char	doubletochar(double d);
	char	floattochar(float f);
	int		floattoint(float f);
	char	inttochar(int i);

#endif
