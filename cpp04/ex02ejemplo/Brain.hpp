/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:58 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 19:46:48 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

#include <iostream>

class	Brain {

	std::string	_ideas[100];

	public:

		Brain(void);
		Brain(Brain &brain);
		~Brain(void);

		Brain	&operator=(Brain &brain);
		std::string	*getIdeas(void);

		void	addIdea(const std::string newIdea);
};

#endif
