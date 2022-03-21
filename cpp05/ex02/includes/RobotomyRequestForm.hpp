/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:05:05 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 18:08:37 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:

	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& Form);
	~RobotomyRequestForm() {};

	bool	execute(Bureaucrat const &executor) const;

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &otherForm);
};

#endif
