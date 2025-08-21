/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:29:58 by rcastano          #+#    #+#             */
/*   Updated: 2025/08/20 14:46:14 by roberto          ###   ########.fr       */
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
	auto it = container.begin();
	it = std::find(it, container.end(), n);
	return (it != container.end()) ? 0 : 1;
}

#endif
