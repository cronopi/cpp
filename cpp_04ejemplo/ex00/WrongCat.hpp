/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:08:49 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 17:09:05 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
# define __WRONGCAT_H__

# include <string>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		WrongCat(const WrongCat &animal);
		~WrongCat(void);

		WrongCat	&operator=(const WrongCat &animal);

		void	makeSound(void) const;
};

#endif
