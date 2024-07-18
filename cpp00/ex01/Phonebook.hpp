/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:28:13 by roberto           #+#    #+#             */
/*   Updated: 2024/07/18 15:20:20 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include	<iomanip>
# include	"Contact.hpp"
# include	<limits>
# include	<cctype>


class Phonebook
{
	private:
		Contact		_contacts[8];
		int			_index;
		int			_n_of_contacts;
	public:
		Phonebook();
		~Phonebook();
		void add_contact();
		void search_contact();
		bool ft_empty(std::string input, bool b);
};

#endif
