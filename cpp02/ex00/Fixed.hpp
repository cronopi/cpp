/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:28:27 by roberto           #+#    #+#             */
/*   Updated: 2023/12/18 22:08:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
};

#endif
