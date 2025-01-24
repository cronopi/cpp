/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:36:04 by roberto           #+#    #+#             */
/*   Updated: 2023/12/16 12:15:20 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include "Weapon.hpp"
class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		~HumanA();
		HumanA(std::string name, Weapon &weapon);
		void attack(void);

};

# endif
