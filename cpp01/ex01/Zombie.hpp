/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:15:04 by roberto           #+#    #+#             */
/*   Updated: 2023/12/12 16:49:31 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	private:
		std::string	_name;
	public:
		void	announce( void );
		void	name(std::string name);
		//constructor
		Zombie();
		//destructor
		~Zombie();
};
	Zombie *newZombie(std::string name);
	Zombie* zombieHorde( int N, std::string name );
#endif
