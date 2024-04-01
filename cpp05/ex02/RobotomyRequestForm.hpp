/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:34:03 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/01 15:57:25 by rcastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
 
class RobotomyRequestForm : public Aform
{
    private:
        std:string _target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &src);
        RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)

        RobotomyRequestForm(std::string target);
        void execute(Bureaucrat const &executor) const;
};

#endif