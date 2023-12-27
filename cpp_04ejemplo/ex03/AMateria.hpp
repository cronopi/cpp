/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:10:49 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 23:42:14 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
# define __AMATERIA_H__

# include <string>
# include "ICharacter.hpp"

class	AMateria {

	protected:

		std::string	_type;

	public:

		AMateria(const std::string &type);
		AMateria(const AMateria &materia);
		virtual	~AMateria(void);

		AMateria	&operator=(const AMateria &materia);

		const std::string	&getType(void) const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
