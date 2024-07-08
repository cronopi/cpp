/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/06/26 11:09:17 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
	private:
		unsigned int *_numbers;
		unsigned int _numbers_lenght;
		unsigned int _i;
		class SpanException : public std::exception
		{
			virtual const char *what() const throw();
		};

	public:
		Span();
		~Span();
		Span(const Span &copy);
		Span & operator=(const Span &copy);

		Span(unsigned int n);
		void	addNumber(int nbr);
		int	shortestSpan();
		int	longestSpan();

};

#endif
