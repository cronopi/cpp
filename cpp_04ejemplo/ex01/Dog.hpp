/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:27 by miguel            #+#    #+#             */
/*   Updated: 2021/09/21 12:51:52 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include <string>
# include "Animal.hpp"

class	Dog : public Animal {

	Brain	*_brain;

	public:

		Dog(void);
		Dog(const Dog &animal);
		virtual	~Dog(void);

		Dog	&operator=(const Dog &animal);

		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
