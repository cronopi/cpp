/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:42:37 by roberto           #+#    #+#             */
/*   Updated: 2023/12/29 13:58:42 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain &copy);
		~Brain();
		Brain &operator=(Brain &copy);

		std::string	*getIdeas(void);
		void	newIdea(const std::string newIdea);


};

# endif
