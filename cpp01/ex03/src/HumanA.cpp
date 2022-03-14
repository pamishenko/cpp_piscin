/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:43:44 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/14 07:58:18 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

std::string	HumanA::getName() {
	return (this->_name);
}

void	HumanA::attack() {
	std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl;
}

Weapon	HumanA::getWeapon() {
	return (this->_weapon);
}

HumanA::~HumanA()
{
}
