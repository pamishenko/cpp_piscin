/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:37 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:39:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Default cat constructor " << getType() << std::endl;
}

Cat::Cat(Cat const &cat) : AAnimal(cat){
	std::cout << "Copy cat constructor " << getType() << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor " << _type << std::endl;
}

Cat &Cat::operator=(Cat const &otherCat){
	_type = otherCat.getType();
	return *this;
}

void Cat::makeSound()const{
	std::cout << "miau murr!" << std::endl;
}