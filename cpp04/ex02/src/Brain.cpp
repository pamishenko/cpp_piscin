/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:02:13 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:10:56 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"
#include <string>

Brain::Brain(){
	for (int i = 0; i < 100; i++){
		ideas[i].append("idea ");
		ideas[i].append(std::to_string(rand() % 100 + i));
	}
	std::cout << "Defdault constructor Brain" << std::endl;
}

Brain::Brain(Brain const& instance)
{
	std::cout << "Copy constructor brain " << this << std::endl;
	*this = instance;
}

Brain::~Brain(){
	std::cout << "The brain was destroyed" << std::endl;
}

void	Brain::operator=(Brain const &otherBrain)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = otherBrain.ideas[i];
}

void	Brain::printRandIdea(){
	std::cout << ideas[rand() % 100] << std::endl;
}
