/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:27 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 16:22:02 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <string>
# include "Animal.hpp"

class	Cat : public Animal {

	public:

		Cat(void);
		Cat(const Cat &animal);
		~Cat(void);

		Cat	&operator=(const Cat &animal);

		void	makeSound(void) const;
};

#endif
