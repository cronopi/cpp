/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:33:05 by miguel            #+#    #+#             */
/*   Updated: 2021/09/12 11:41:35 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _mem() {

	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src) :IMateriaSource() {

	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void) {

	for (int i = 0; i < MATERIASOURCE_CAP; i++) {
		if (this->_mem[i])
			delete this->_mem[i];
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src) {

	AMateria	*tmp;

	for (int i = 0; i < MATERIASOURCE_CAP; i++) {
		tmp = src.getMem(i);
		if (tmp)
			this->_mem[i] = tmp->clone();
	}
	return (*this);
}

AMateria	*MateriaSource::getMem(const int n) const {

	return (this->_mem[n]);
}

void	MateriaSource::learnMateria(AMateria *materia) {

	for (int i = 0; i < MATERIASOURCE_CAP; i++) {
		if (!this->_mem[i]) {
			this->_mem[i] = materia;
			break ;
 		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type) {

	for (int i = 0; i < MATERIASOURCE_CAP; i++) {
		if (type == this->_mem[i]->getType())
			return (this->_mem[i]->clone());
	}
	return (NULL);
}
