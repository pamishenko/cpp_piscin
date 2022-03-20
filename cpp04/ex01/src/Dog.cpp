/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:34 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:39:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
	_dogsBrain = new Brain();
	std::cout << "Default Dog constructor " << getType() << std::endl;
}

Dog::Dog(Dog const &dat) : AAnimal(dat){
	std::cout << "Copy dat constructor " << getType() << std::endl;
}

Dog::~Dog(){
	delete _dogsBrain;
	std::cout << "Dog destructor " << _type << std::endl;
}

Dog &Dog::operator=(Dog const &otherDog){
	_type = otherDog.getType();
	return *this;
}

void Dog::makeSound()const {
	std::cout << "wow wow" << std::endl;
}

Brain *Dog::getBrain() const{
	return _dogsBrain;
}
