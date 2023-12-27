/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:27 by miguel            #+#    #+#             */
/*   Updated: 2021/09/21 12:51:39 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <string>
# include "Animal.hpp"

class	Cat : public Animal {

	Brain	*_brain;

	public:

		Cat(void);
		Cat(const Cat &animal);
		virtual	~Cat(void);

		Cat	&operator=(const Cat &animal);

		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
