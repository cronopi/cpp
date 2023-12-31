/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:27 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 16:21:58 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include <string>
# include "Animal.hpp"

class	Dog : public Animal {

	public:

		Dog(void);
		Dog(const Dog &animal);
		~Dog(void);

		Dog	&operator=(const Dog &animal);

		void	makeSound(void) const;
};

#endif
