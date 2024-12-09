/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:03:45 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/09 12:54:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void iter(T *adress, int lengh, void(*f)(T))
{
	int i;

	i = 0;
	if (adress == NULL || f == NULL)
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
