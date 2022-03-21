/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:44:08 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:41:20 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

AForm *Intern::_createPresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::_createRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::_createShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	std::cout << DARK_GREEN << "Created intern" << END_COLOR << std::endl;
}

Intern::~Intern()
{
	std::cout << DARK_RED << "Destroyed intern" << END_COLOR << std::endl;
}

Intern::Intern(Intern const& intern)
{
	std::cout << "Copy constructor intern" << std::endl;
	*this = intern;
}

Intern	&Intern::operator=(Intern const &otherIntern)
{
	(void)otherIntern;
	return (*this);
}

AForm	*Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string namesFormArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	AForm	*(Intern::*internForms[3])(std::string target) = {&Intern::_createShrubberyForm,
															&Intern::_createRobotomyForm,
															&Intern::_createPresidentialForm};
	for(int i = 0; i < 3; i++)
	{
		if(nameForm == namesFormArray[i])
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return ((this->*internForms[i])(targetForm));
		}
	}
	std::cout << nameForm << " is not a valid form." << std::endl;
	return (NULL);
}

std::ostream &operator<<(std::ostream &outputFile, Intern const &intern){
	(void)intern;
	outputFile << "Noname intern..." << std::endl;
	return (outputFile);
}