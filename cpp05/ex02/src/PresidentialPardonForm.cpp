/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:05:02 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 08:54:06 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Defines.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
					AForm("PresidentialPardonForm", 25, 5){
	setTarget(target);
	std::cout << GREEN << "Create " << getName() << END_COLOR << std::endl;
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::cout << DARK_GREEN << this->getTarget()
				<< " has been pardoned by Zaphod Beeblebrox"
				<< END_COLOR << std::endl;
		return (true);
	}
	return (false);
}
