/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:15:04 by roberto           #+#    #+#             */
/*   Updated: 2023/12/16 11:20:56 by roberto          ###   ########.fr       */
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
		void	setname(std::string name);
		//constructor
		Zombie();
		//destructor
		~Zombie();
};
	Zombie* zombieHorde( int N, std::string name );
#endif
