/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:25:12 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/25 23:18:14 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>
#include "../includes/Defines.hpp"
// #define DEBUG

void	parseChar(std::string literal){
	int	result = 0;

	if (literal.size() == 1 && !isdigit(literal[0]))
		std::cout << "'" << static_cast<char>(literal[0]) << "'" << std::endl;
	else{
		size_t num;
		result = std::stoi(literal, &num, 10);
		if (isprint(result))
			std::cout << "'" << static_cast<char>(result) << "'" << std::endl;
		if (result <= 32 || result >= 127)
			std::cout << "Non displayable" << std::endl;
	}
};

void	parseInt(std::string literal){
	int	result = 0;
	
	if (literal.size() == 1)
		result = static_cast<int>(literal.c_str()[0]);
	if (result >=48 && result <= 58)
		result -= 48;
	else
	{
	std::size_t	num;
	result = std::stoi(literal, &num, 10);
	}
	std::cout << result << std::endl;
};

void	parseFloat(std::string literal){
	float result = 0;
	size_t	num;

	result = static_cast<float>(std::stof(literal, &num));
	std::cout << result;
	if (roundf(result) == result)
		std::cout << ".0";
	std::cout << "f" << std::endl;
};

void	parseDouble(std::string literal){
	double	result = 0;
	size_t	num;

	result = std::stod(literal, &num);
	std::cout << result	;
	if (roundf(result) == result)
		std::cout << ".0";
	std::cout << std::endl;
};

int	main(int argc, char **argv){
	if (argc != 2)
		std::cerr << RED << "No arguments" << END_COLOR << std::endl;
	try
	{
	std::cout << "char: ";
	parseChar(argv[1]);
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Non displayable" << std::endl;
	}

	try
	{
	std::cout << "int: ";
	parseInt(argv[1]);
	}
		catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Non displayable" << std::endl;
	}
	
	try
	{
	std::cout << "float: ";
	parseFloat(argv[1]);
	}
		catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Non displayable" << std::endl;
	}

 	try
	{
	std::cout << "double: ";
	parseDouble(argv[1]);
	}
		catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Non displayable" << std::endl;
	}
	return 0;
}
