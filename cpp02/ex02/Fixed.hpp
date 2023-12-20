/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:28:27 by roberto           #+#    #+#             */
/*   Updated: 2023/12/19 03:14:50 by roberto          ###   ########.fr       */
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

		bool operator>( Fixed const & rhs) const;
		bool operator<( Fixed const & rhs) const;
		bool operator>=( Fixed const & rhs) const;
		bool operator<=( Fixed const & rhs) const;
		bool operator==( Fixed const & rhs) const;
		bool operator!=( Fixed const & rhs) const;

		// + - * /
		Fixed operator+( Fixed const & rhs) const;
		Fixed operator-( Fixed const & rhs) const;
		Fixed operator*( Fixed const & rhs) const;
		Fixed operator/( Fixed const & rhs) const;

		// ++F F++ --F F--
		Fixed & operator++( void ); // Prefix (++F)
		Fixed & operator--( void ); // Prefix (--F)
		Fixed operator++( int n ); // Postfix (F++)
		Fixed operator--( int n ); // Postfix (F--)

		// min & max
		static Fixed & min(Fixed & a, Fixed & b );
		static Fixed & max(Fixed & a, Fixed & b );
		static const Fixed & min(const Fixed & a, const Fixed & b );
		static const Fixed & max(const Fixed & a, const Fixed & b );
};

	std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
