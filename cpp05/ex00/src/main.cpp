/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:20 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:19:58 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(){
	Bureaucrat b1;
	Bureaucrat b2("some low", 1);
	Bureaucrat b3("some high", 150);
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	
	b1.incGrade();
	b2.incGrade();
	b3.incGrade();
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	
	b1.incGrade();
	b2.incGrade();
	b3.incGrade();
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	
	b1.incGrade();
	b2.incGrade();
	b3.incGrade();
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	b1.decGrade();
	b2.decGrade();
	b2.decGrade();

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	
	b2.decGrade();
	b2.decGrade();
	b2.decGrade();
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	
	b1.decGrade();
	b2.decGrade();
	b3.decGrade();
	
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	return 0;
}