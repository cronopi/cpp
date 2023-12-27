/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:30:13 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 17:48:44 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
# define __CHARACTER_H__

# include <string>
# include "ICharacter.hpp"

# define CHARACTER_INVENTORY_CAP 4

class	Character : public ICharacter {

	std::string	_name;
	AMateria	*_inventory[4];

	public:

		Character(const std::string &name);
		Character(const Character &character);
		~Character(void);

		Character	&operator=(const Character &src);

		const std::string	&getName(void) const;
		AMateria			*getNMateria(const int n) const;

		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
