/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:43:52 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/14 08:23:35 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "stdlib.h"

Weapon::Weapon(std::string name)
{
	this->_type = name;
}

const std::string	&Weapon::getType() const{
	return(this->_type);
}
void Weapon::setType(const std::string nameType){
	if (nameType != "")
		this->_type = nameType;
}

Weapon::~Weapon()
{
}