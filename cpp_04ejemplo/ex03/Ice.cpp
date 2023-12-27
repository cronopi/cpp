/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:44:02 by miguel            #+#    #+#             */
/*   Updated: 2021/09/11 23:51:23 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {

	return ;
}

Ice::Ice(const Ice &ice) : AMateria("ice") {

	(void)ice;
	return ;
}

Ice::~Ice(void) {

	return ;
}

Ice	&Ice::operator=(const Ice &ice) {

	(void)ice;
	return (*this);
}

AMateria	*Ice::clone(void) const {

	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
