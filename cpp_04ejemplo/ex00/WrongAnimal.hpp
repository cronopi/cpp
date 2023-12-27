/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:06:19 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 17:06:19 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

# include <string>

class	WrongAnimal {

	protected:

		std::string	_type;

	public:

		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &WrongAnimal);
		virtual	~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &WrongAnimal);

		const std::string	&getType(void) const;

		void	makeSound(void) const;
};

#endif
