/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:10:34 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 23:47:14 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type) {

	return ;
}

AMateria::AMateria(const AMateria &materia) {

	this->_type = materia.getType();
	return ;
}

AMateria::~AMateria(void) {

	return ;
}

AMateria	&AMateria::operator=(const AMateria &materia) {

	this->_type = materia.getType();
	return (*this);
}

const std::string &AMateria::getType(void) const {

	return (this->_type);
}

void	AMateria::use(ICharacter &target) {

	std::cout << "* uses " << this->_type << " against *" << target.getName() << std::endl;
}
