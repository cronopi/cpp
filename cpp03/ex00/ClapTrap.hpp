/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:32:24 by roberto           #+#    #+#             */
/*   Updated: 2023/12/20 15:12:19 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		// propiedades específicas de cada uno
		std::string _name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

		// propiedades de las clases como norma general
		static const std::string	_class_name;
		static const unsigned int	_class_hp;
		static const unsigned int	_class_energy_points;
		static const unsigned int	_class_attack_damage;
		static const unsigned int	_class_repair_points;
		static const unsigned int	_class_action_energy_cost;

	public:
		//constructors and destructors
		ClapTrap::ClapTrap(std::string name);
		ClapTrap::ClapTrap( ClapTrap const & src );
		~ClapTrap();

		//getters
		std::string getName( void );
		int			getHitPoints( void );
		int			getEnergyPoints( void );
		int			getAttackDamage( void );

		// Static getters
		std::string		ClapTrap::get_class_name( void );
		unsigned int	ClapTrap::get_class_hp( void );
		unsigned int	ClapTrap::get_class_energy_points( void );
		unsigned int	ClapTrap::get_class_attack_damage( void );
		unsigned int	ClapTrap::get_class_repair_points( void );
		unsigned int	ClapTrap::get_class_action_energy_cost( void );

		//setters
		void setName(std::string name);
		void setHitPoints(int hit_points);
		void setEnergyPoints(int energy_points);
		void setAttackDamage(int attack_damage);

		//methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
