/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/14 14:41:57 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T		min(T const& a, T const& b)
{
	if (a < b)
		return a;
	else if (b > a)
		return (b);
	else
		return (b);
}

template <typename T>
T		max(T const& a, T const& b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	else
		return (b);
}
