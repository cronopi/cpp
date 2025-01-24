/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:32:24 by roberto           #+#    #+#             */
/*   Updated: 2023/12/22 13:12:58 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		// propiedades específicas de cada uno
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
		unsigned int	_max_hit_points;

		//constructor
		ClapTrap();

	public:
		//constructors and destructors
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const &src );
		~ClapTrap();

		//getters
		std::string getName( void );
		int			getHitPoints( void );
		int			getEnergyPoints( void );
		int			getAttackDamage( void );

		//setters
		void		setAttackDamage( unsigned int amount );

		//methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//operators
		ClapTrap &operator=( const ClapTrap &other);
};

#endif
