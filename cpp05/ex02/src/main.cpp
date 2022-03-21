/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:20 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:29:29 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/Defines.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"


int	main(){
	Bureaucrat bur[3] = {Bureaucrat("First Bur (low)", 150), Bureaucrat("Two Bur ", 75), Bureaucrat("President", 1)};

	PresidentialPardonForm	pardonForm("pardon_form");
	RobotomyRequestForm		roboForm("Robo_form");
	RobotomyRequestForm		roboForm1("Robo_form1");
	ShrubberyCreationForm	shrForm("Tree_form");
	
	for (int i = 0; i < 3; i++){
		bur[i].signForm(pardonForm);
		try
		{
			pardonForm.execute(bur[i]);
		}
		catch(const std::exception& ex)
		{
			std::cerr << RED << ex.what() << END_COLOR << std::endl;
		}
	}

	for (int i = 0; i < 3; i++){
		bur[i].signForm(roboForm);
		std::cout << roboForm;
		try
		{
			roboForm.execute(bur[i]);
		}
		catch(const std::exception& ex)
		{
			std::cerr << RED << ex.what() << END_COLOR << std::endl;
		}
	}

	for (int i = 0; i < 3; i++){
		bur[i].signForm(roboForm1);
			std::cout << roboForm1;
		try
		{
			roboForm1.execute(bur[i]);
		}
		catch(const std::exception& ex)
		{
			std::cerr << RED << ex.what() << END_COLOR << std::endl;
		}
	}


	for (int i = 0; i < 3; i++){
		bur[i].signForm(shrForm);
			std::cout << shrForm;
		try
		{
			shrForm.execute(bur[i]);
		}
		catch(const std::exception& ex)
		{
			std::cerr << RED << ex.what() << END_COLOR << std::endl;
		}
	}
	
}