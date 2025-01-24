/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:28:27 by roberto           #+#    #+#             */
/*   Updated: 2023/12/19 14:02:49 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixed_point_number;
		static const int _fractional_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed & operator=( Fixed const & rhs);
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed(int const int_arg);
		Fixed(float const float_arg);
		float toFloat(void) const;
		int toInt(void) const;
};
	std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
