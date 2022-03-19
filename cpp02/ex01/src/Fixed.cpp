/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:44:12 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/18 23:47:45 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &cpFixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpFixed;	
}

Fixed::Fixed(int const intNumber)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = intNumber << Fixed::_fractionalBits;
}

Fixed::Fixed(float const floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(floatNumber * (1 << Fixed::_fractionalBits));
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fNumber)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = fNumber.getRawBits();
	return *this;
}
std::ostream	&operator<<(std::ostream &outputFile, Fixed const &fN)
{
	outputFile << fN.toFloat();
	return (outputFile);
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const rawBits)
{
	this->_rawBits = rawBits;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt(void)const
{
	return (this->_rawBits >> Fixed::_fractionalBits);
}
