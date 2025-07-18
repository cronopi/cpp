/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/10/15 23:52:23 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _Container;
		unsigned int _lenght;
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
		void	fill(unsigned int size);
		void	addNumber(int nbr);
		int		shortestSpan();
		int		longestSpan();

};

#endif
