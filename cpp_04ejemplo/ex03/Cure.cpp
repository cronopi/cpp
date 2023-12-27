/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:43:53 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 23:50:16 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {

	return ;
}

Cure::Cure(const Cure &cure) : AMateria("cure") {

	(void)cure;
	return ;
}

Cure::~Cure(void) {

	return ;
}

Cure	&Cure::operator=(const Cure &cure) {

	(void)cure;
	return (*this);
}

AMateria	*Cure::clone(void) const {

	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
