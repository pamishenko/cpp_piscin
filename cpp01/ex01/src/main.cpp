/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:48:54 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/13 21:14:05 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main (void){
	int			count = 3;
	std::string	name = "zombiename";
	
	Zombie *zombie = zombieHorde(count, name);
	for (int i = 0; i < count; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}
