/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:25:12 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/23 09:01:23 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

	void	parseChar(std::string literal){
		int result;

		if (literal.size() == 1 && !isdigit(literal[0]))
			std::cout << "char: '" << static_cast<char>(literal[0])
			<< "'" << std::endl;
		else{
			size_t num;
			result = std::stoi(literal, &num, 10);
			if (isprint(result))
				std::cout << static_cast<char>(result) << std::endl;
			if (result <= 32 || result >= 127)
				std::cout << "Non displayable" << std::endl;
		}
	};

	// void	parseInt(std::string literal){
	// 	std::cout << "int: " << static_cast<int>(literal.c_str())
	// 	<< std::endl;
	// };

	// void	parseFloat(std::string literal){
	// 	std::cout << "float: " << static_cast<int>(literal.c_str())
	// 	<< std::endl;
	// };

	// void	parseDouble(std::string literal){
	// 	std::cout << "double: " << static_cast<double>(literal.c_str()) 
	// 	<< std::endl;
	// };

int	main(int argc, char **argv){
	parseChar(argv[1])	;
	return 0;
}
