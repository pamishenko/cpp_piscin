/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 08:38:12 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/26 10:10:02 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/defines.hpp"
#include "../includes/whatever.hpp"

template <typename T>
void	swap(T &element1, T &element2) {
	T tmp = element1;

	element1 = element2;
	element2 = tmp;
	return ;
}

template< typename T>
T min(T  &element1, T  &element2) {
	return (element2 < element1 ? element2 : element1);
}

template< typename T>
T max(T  &element1, T  &element2) {
	return (element2 > element1 ? element2 : element1);
}

template <typename T>
void	printResult(T &element1, T &element2){
	std::cout << "\telement1 = " << element1 << std::endl;
	std::cout << "\telement2 = " << element2 << std::endl;
	std::cout << "\tmax(int) = " << max(element1, element2) << std::endl;
	std::cout << "\tmin(int) = " << min(element1, element2) << std::endl;
	swap(element1, element2);
	std::cout << "\telement1 = " << element1 << std::endl;
	std::cout << "\telement2 = " << element2 << std::endl;
}


int	main(){
	int		a = 5;
	int		b = 9;
	double	x = 4.5;
	double	y = 5.4;
	std::string	str1 = "some string";
	std::string	str2 = "other string";
	
	std::cout << RED;
	std::cout << "int:" << std::endl;
	printResult(a, b);	
	std::cout << YELLOW;
	std::cout << "double:" << std::endl;
	printResult(x, y);	
	std::cout << BLUE;
	std::cout << "string:" << std::endl;
	printResult(str1, str2);	
	std::cout << END_COLOR;

	std::cout << "\ndefault main:\n" << std::endl;

	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

