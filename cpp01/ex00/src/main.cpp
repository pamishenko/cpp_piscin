/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:56:24 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/13 20:23:31 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void){
	Zombie	zombie_stack("Zombie_1");
	zombie_stack.announce();

	Zombie	*zombie_ptr = zombie_stack.newZombie("Zombie_2");
	zombie_ptr->announce();

	zombie_stack.randomChump("Zombie_3");
	delete zombie_ptr;

	return (0);
}