/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:44:11 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:38:09 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
private:
	AForm	*_createPresidentialForm(std::string target);
	AForm	*_createRobotomyForm(std::string target);
	AForm	*_createShrubberyForm(std::string target);

public:
	Intern();
	~Intern();
	Intern(Intern const& intern);

	Intern	&operator=(Intern const &otherIntern);

	AForm	*makeForm(std::string nameForm, std::string targetForm);
};

std::ostream &operator<<(std::ostream &outputFile, Intern const &intern);

#endif
