/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:42:01 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 20:57:45 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
# define __ICE_H__

# include "AMateria.hpp"

class Ice : public AMateria {

	public:

		Ice(void);
		Ice(const Ice &ice);
		~Ice(void);

		Ice	&operator=(const Ice &ice);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
