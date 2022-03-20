/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:31 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:39:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main() {
	const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << i->getType() << " "; i->makeSound();
	std::cout << j->getType() << " "; j->makeSound();
	std::cout << meta->getType() << " "; meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
return 0;	
}
