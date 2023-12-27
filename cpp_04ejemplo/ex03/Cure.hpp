/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:43:08 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 20:57:35 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
# define __CURE_H__

# include "AMateria.hpp"

class Cure : public AMateria {

	public:

		Cure(void);
		Cure(const Cure &cure);
		~Cure(void);

		Cure	&operator=(const Cure &cure);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
