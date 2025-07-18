/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:59:39 by roberto           #+#    #+#             */
/*   Updated: 2024/07/26 10:48:19 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	Zombie	zombie2("manolo");

	zombie = newZombie("roberto");
	randomChump("alvaro");
	zombie->announce();
	zombie2.announce();
	delete zombie;
	return (0);
}
