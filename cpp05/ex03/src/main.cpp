/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:20 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:40:20 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Defines.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int	main(){

	Intern intern;
	
	std::cout << intern;
	
	AForm *formPresident = intern.makeForm("presidential pardon", "Alex");
	AForm *formShrubbery = intern.makeForm("shrubbery creation", "groot");
	AForm *formRobotomy = intern.makeForm("robotomy request", "Bender");
	AForm *breakForm = intern.makeForm("NULNULNULFORM", "0_0_0_0");	

	Bureaucrat putin("Putin", 1);

	putin.executeForm(*formPresident);
	putin.signForm(*formPresident);
	putin.executeForm(*formPresident);
	putin.executeForm(*formShrubbery);
	putin.signForm(*formShrubbery);
	putin.executeForm(*formShrubbery);
	putin.executeForm(*formRobotomy);
	putin.signForm(*formRobotomy);
	putin.executeForm(*formRobotomy);
	
	delete formPresident;
	delete formShrubbery;
	delete formRobotomy;
	delete breakForm;
}