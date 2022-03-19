/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:44:12 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/19 00:00:11 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &cpFixed)
{
	*this = cpFixed;	
}

Fixed::Fixed(int const intNumber)
{
	this->_rawBits = intNumber << Fixed::_fractionalBits;
}

Fixed::Fixed(float const floatNumber)
{
	this->_rawBits = (int)roundf(floatNumber * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed()
{
}


Fixed &Fixed::operator=(Fixed const &fractionalBits)
{
	this->_rawBits = fractionalBits.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const &fNumber)
{
	return (this->toFloat() + fNumber.toFloat());
}

Fixed Fixed::operator-(Fixed const &fNumber)
{
	return (this->toFloat() - fNumber.toFloat());
}

Fixed Fixed::operator*(Fixed const &fNumber)
{
	return (this->toFloat() * fNumber.toFloat());
}

Fixed Fixed::operator/(Fixed const &fNumber)
{
	return (this->toFloat() / fNumber.toFloat());
}



bool	Fixed::operator>(Fixed const &fNumber) const
{
	return (this->getRawBits() > fNumber.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fNumber) const
{
	return (this->getRawBits() >= fNumber.getRawBits());
}

bool	Fixed::operator<(Fixed const &fNumber) const
{
	return (this->getRawBits() < fNumber.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fNumber) const
{
	return (this->getRawBits() <= fNumber.getRawBits());
}

bool	Fixed::operator==(Fixed const &fNumber) const
{
	return (this->getRawBits() == fNumber.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fNumber) const
{
	return (this->getRawBits() != fNumber.getRawBits());
}



Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result(*this);
	this->_rawBits++;
	return (result);
}

Fixed	Fixed::operator--(int)
{
	Fixed result(*this);
	this->_rawBits--;
	return (result);
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

std::ostream	&operator<<(std::ostream &outputFile, Fixed const &fN)
{
	outputFile << fN.toFloat();
	return (outputFile);
}

Fixed const	&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed const	&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}
