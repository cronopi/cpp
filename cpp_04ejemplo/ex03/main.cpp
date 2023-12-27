/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:46:18 by miguel            #+#    #+#             */
/*   Updated: 2021/09/12 11:53:23 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	IMateriaSource* ice_book = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	for (int i = 0; i < MATERIASOURCE_CAP; i++) {
		ice_book->learnMateria(new Ice());
	}

	AMateria *tmpcure = new Cure();
	ice_book->learnMateria(tmpcure);

	ICharacter* me = new Character("me");
	ICharacter* ice_mage = new Character("ice mage");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ice_mage->equip(ice_book->createMateria("cure"));

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	ice_mage->use(0, *bob);

	for (int i = 0; i < CHARACTER_INVENTORY_CAP; i++){
		ice_mage->equip(ice_book->createMateria("ice"));
	}

	ice_mage->equip(tmpcure);

	for (int i = 0; i < CHARACTER_INVENTORY_CAP; i++) {
		ice_mage->use(i, *bob);
	}

	delete tmpcure;

	delete ice_book;
	delete ice_mage;
	delete bob;
	delete me;
	delete src;

	return 0;
}
