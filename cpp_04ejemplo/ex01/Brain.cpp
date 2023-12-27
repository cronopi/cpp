/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:19:35 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:04:08 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"

void	copyIdeas(std::string dst[100], std::string *src) {

	for (int i = 0; i < 100; i++)
		dst[i] = src[i];
}

Brain::Brain(void) {

	std::cout << "Brain set up completed" << std::endl;
	return ;
}

Brain::Brain(Brain &brain) {

	std::cout << "Brain set up completed" << std::endl;
	copyIdeas(this->_ideas, brain.getIdeas());
	return ;
}

Brain::~Brain(void) {

	std::cout << "Brain memory cleaned" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain &brain) {

	copyIdeas(this->_ideas, brain.getIdeas());
	return (*this);
}

std::string	*Brain::getIdeas(void) {

	return (this->_ideas);
}

void	Brain::addIdea(std::string newIdea) {

	size_t	i = 0;

	while (i < 100) {
		if (this->_ideas[i].empty()) {
			this->_ideas[i] = newIdea;
			break ;
		}
		i++;
	}

	if (i == 100)
		std::cout << "this brain is filled with ideas";
}
