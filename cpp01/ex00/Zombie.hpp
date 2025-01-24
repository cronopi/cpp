/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:16:05 by roberto           #+#    #+#             */
/*   Updated: 2024/07/26 10:26:07 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>


class	Zombie
{
	private:
		std::string	_name;

	public:
		void	announce( void );
		Zombie(std::string name);
		~Zombie();
};
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );

#endif
