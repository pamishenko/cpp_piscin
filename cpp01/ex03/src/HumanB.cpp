/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:43:32 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/14 08:26:48 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_weapon = NULL;
}

std::string	HumanB::getName(){
	return (this->_name);
}

void	HumanB::attack(){
	
	std::string mes = "";
	if (this->getWeapon()) 
		mes = this->getWeapon()->getType();
	std::cout << this->getName() << " attacks with their " << mes << std::endl;
}

Weapon	*HumanB::getWeapon(){
	return (this->_weapon);
}

HumanB::~HumanB()
{
}
