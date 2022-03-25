/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:54:29 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/25 23:12:26 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/defines.hpp"
#include "../includes/serialize.hpp"

int main(){
	Data		serializz;
	uintptr_t	u_ptr;
	Data		*serializz_p;
	

	std::cout << YELLOW;
	std::cout << "pointer seriapizz = " << &serializz << std::endl;
	printData(serializz);
	std::cout << END_COLOR;

	std::cout << RED;
	u_ptr = serialize(&serializz);
	std::cout << "uint_p = " << u_ptr << std::endl;
	std::cout << END_COLOR;

	std::cout << BLUE;
	serializz_p = deserialize(u_ptr);
	std::cout << "seriapizz = " << serializz_p << std::endl;
	printData(*serializz_p);
	std::cout << END_COLOR;

	
}