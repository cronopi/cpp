/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/15 10:45:21 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void iter(char *adress, int lengh, void(*f)(T))
{
	int i;

	i = 0;
	while(i < lengh)
	{
		(f)(adress[i]);
		i++;
	}
}
