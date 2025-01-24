/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:27:01 by roberto           #+#    #+#             */
/*   Updated: 2024/07/26 10:42:08 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int i = 0;
	int n = 3;

	horde = zombieHorde(n, "for the horde!");
	while (i < n)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
