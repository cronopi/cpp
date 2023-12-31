/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:33:59 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 19:57:10 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <string>
# include "Brain.hpp"

class	Animal {

	protected:

		std::string	_type;
		Brain		*_brain;

	public:

		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual	~Animal(void);

		Animal	&operator=(const Animal &animal);

		const std::string	getType(void) const;
		Brain				*getBrain(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
