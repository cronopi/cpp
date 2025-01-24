/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2024/06/24 11:25:33 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <set>

template <typename T>

	int Easyfind(T container, int n)
	{
		typename T::iterator it;
		it = container.begin();
		while (it != container.end())
		{
			if (*it == n)
				return (0);

			it++;
		}
		return (1);
	}

#endif
