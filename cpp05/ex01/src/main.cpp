/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:20 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:23:37 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/Defines.hpp"

int	main(){
	Bureaucrat bur[3] = {Bureaucrat("One low", 150), Bureaucrat("Two low", 75), Bureaucrat("Master", 1)};

bur[0].incGrade();
	Form form[4] = {Form(), Form("f2", 49, 49), Form("f3" , 50, 100), Form("f4", 150, 150)};

	for (int i = 0; i < 4; i++){
		std::cout << "form " << form[i].getName() << " istatus "
					<< form[i].getIsSigned() << std::endl;
	}
		
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			std::cout << form[i];
			try
			{
				form[i].beSigned(bur[j]);
			}
			catch(const std::exception& ex)
			{
				std::cerr << RED << ex.what() << " ";
				std::cerr << bur[j].getName() << " " << bur[j].getGrade() << END_COLOR << std::endl;
				continue;
			}
			std::cout << "Curent bureaucrat " << bur[j].getName() << " form " << form[i].getName() << " istatus "
						<< form[i].getIsSigned() << std::endl;	
		}
	}
}