/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 22:28:33 by roberto           #+#    #+#             */
/*   Updated: 2024/09/12 18:06:07 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string *Brain::getIdeas(void)
{
	return (this->ideas);
}

void	Brain::newIdea(const std::string newIdea)
{
	static int i = 0;

	if (this->ideas[i] == "")
		this->ideas[i] = newIdea;
	i++;

}

void	copyIdeas(std::string dst[100], std::string *ideas) {

	for (int i = 0; i < 100; i++)
		dst[i] = ideas[i];
}

Brain::Brain(Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	copyIdeas(ideas, brain.getIdeas());
	return ;
}

Brain	&Brain::operator=(Brain &copy)
{
	copyIdeas(ideas, copy.getIdeas());
	return (*this);
}

