/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:04:19 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 19:37:18 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "../includes/Defines.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
					AForm("ShrubberyCreationForm", 145, 137){
	setTarget(target);
	std::cout << GREEN << "Create " << getName() << END_COLOR << std::endl;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string line;
	std::string name = getTarget() + "_shrubbery";
	std::ofstream outputFile(name.c_str());
	std::ifstream inputFile("trees.txt");
	
	if (AForm::execute(executor))
	{
		if(inputFile && outputFile)
		{
			while(getline(inputFile, line))
				outputFile << line << std::endl;
		}
		else
			std::cout << RED << "Error write tree to file" << END_COLOR << std::endl;
		outputFile.close();
		inputFile.close();
		return false;
	}
	outputFile.close();
	inputFile.close();
	return true;
}