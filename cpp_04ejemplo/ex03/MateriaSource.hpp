/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:55:35 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 20:48:32 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
# define __MATERIASOURCE_H__

# include "IMateriaSource.hpp"

# define MATERIASOURCE_CAP 4

class	MateriaSource : public IMateriaSource {

	AMateria	*_mem[MATERIASOURCE_CAP];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &src);

		AMateria	*getMem(const int n) const;

		void		learnMateria(AMateria *);
		AMateria	*createMateria(const std::string &type);
};

#endif
