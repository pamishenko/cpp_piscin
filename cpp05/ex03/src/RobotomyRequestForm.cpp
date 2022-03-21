/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:05:05 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 19:29:35 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Defines.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
					AForm("RobotomyRequestForm", 72, 45){
	setTarget(target);
	std::cout << GREEN << "Create " << getName() << END_COLOR << std::endl;
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (AForm::execute(executor))
	{
		std::srand((int)time(NULL));
		if((rand() % 2) == 0)
			std::cout << DARK_GREEN << this->getTarget()
					<< " UUUUUUUUUUU  has been robotomized"
					<< END_COLOR << std::endl;
		else
			std::cout << DARK_GREEN << this->getTarget()
					<< " robotomy failed"
					<< END_COLOR << std::endl;
		return (true);
	}
	return (false);
}
