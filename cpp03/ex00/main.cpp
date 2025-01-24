/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:33:25 by roberto           #+#    #+#             */
/*   Updated: 2023/12/21 13:47:34 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string s1 = "Gertrude";
	std::string s2 = "Gilbert";

	// creamos instancias de ClapTrap
	ClapTrap claptrap1(s1);
	ClapTrap claptrap2(s2);

	std::cout << std::endl;

	claptrap1.setAttackDamage(5);
	claptrap1.attack(s2);
	claptrap2.takeDamage(5);
	claptrap2.beRepaired(3);
	claptrap2.beRepaired(18);

	claptrap1.setAttackDamage(9);
	claptrap2.attack(s1);
	claptrap1.takeDamage(0);
	claptrap2.setAttackDamage(4);
	claptrap2.attack(s1);
	claptrap1.takeDamage(4);


	claptrap1.beRepaired(3);
	claptrap1.beRepaired(64);
	std::cout << std::endl;
	return (0);
}
