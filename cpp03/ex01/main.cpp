/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:33:25 by roberto           #+#    #+#             */
/*   Updated: 2023/12/22 13:13:50 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
    ClapTrap    jerry("jerry");
    ScavTrap    tom("tom");


    jerry.attack(tom.getName());
    tom.attack(jerry.getName());
    jerry.takeDamage(tom.getAttackDamage());
    jerry.beRepaired(10);

    tom.guardGate();

	return (0);
}
