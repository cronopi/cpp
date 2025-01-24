/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:33:25 by roberto           #+#    #+#             */
/*   Updated: 2023/12/22 13:38:29 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int    main(void) {

    ClapTrap    jerry("jerry");
    ScavTrap    tom("tom");
    FragTrap    spike("spike");


    jerry.attack(tom.getName());
    tom.attack(jerry.getName());
    jerry.takeDamage(tom.getAttackDamage());
    spike.attack(tom.getName());
    tom.takeDamage(spike.getAttackDamage());
    jerry.beRepaired(10);

    tom.guardGate();
    spike.highFivesGuys();


	return (0);
}
