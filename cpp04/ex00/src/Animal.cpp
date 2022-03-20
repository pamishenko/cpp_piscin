/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:41 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:39:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

AAnimal::AAnimal(std::string typeName) : _type(typeName){
	std::cout << "Create parametr animal constructor " << _type << std::endl;
}

AAnimal::AAnimal() : _type("some type"){
	std::cout << "Create default animal constructor " << _type << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "Destructor animal " << _type << std::endl;
}

AAnimal::AAnimal(AAnimal const &animal){
	std::cout << "Copy animal constructor " << animal.getType() << std::endl;	
	*this = animal;
}

AAnimal		&AAnimal::operator=(AAnimal const &otherAnimal){
	_type = otherAnimal.getType();
	return *this;
}

void AAnimal::makeSound() const{
	std::cout << "some volume" << std::endl;
}

std::string	AAnimal::getType() const{
	return _type;
}
