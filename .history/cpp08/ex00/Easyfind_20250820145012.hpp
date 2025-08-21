/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2025/08/20 14:50:11 by roberto          ###   ########.fr       */
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
	typename T::iterator it = container.begin();
	typename T::iterator it_end = container.end();

	it = std::find(it, it_end, n);
	return (it != it_end) ? 0 : 1;
}

#endif
