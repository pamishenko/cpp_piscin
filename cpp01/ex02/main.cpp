/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:19:18 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/13 21:38:25 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "The memory address of the string variable:\t" << &str << std::endl;
	std::cout << "The memory address held by stringPTR:\t\t" << strPtr << std::endl;
	std::cout << "The memory address held by stringREF:\t\t" << &strRef << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "The value of the string variable:\t\t" << str << std::endl;
	std::cout << "The value pointed to by stringPTR:\t\t" << *strPtr << std::endl;
	std::cout << "The value pointed to by stringREF:\t\t" << strRef << std::endl;
	return (0);
}
