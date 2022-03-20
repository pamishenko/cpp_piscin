/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:31 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 12:43:51 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main() {
	const Dog *j = new Dog();
	const Cat *i = new Cat();
	std::cout << i->getType() << " idea - "; i->getBrain()->printRandIdea();
	std::cout << j->getType() << " idea - "; j->getBrain()->printRandIdea();

	delete j;
	delete i;
return 0;	
}
