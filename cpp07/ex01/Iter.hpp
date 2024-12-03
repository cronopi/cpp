/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/02 14:09:23 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void iter(char *adress, int lengh, void(*f)(T))
{
	int i;

	i = 0;
	if (adress == NULL)
		return;
	while(i < lengh)
	{
		(f)(adress[i]);
		i++;
	}
}

template <typename T>
void TemplateTest(T value)
{
    std::cout << "Valor del parametro: " << value << std::endl;
}
