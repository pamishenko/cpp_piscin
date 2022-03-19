/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:45:48 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/18 23:47:18 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static int const	_fractionalBits = 8;
public:
	Fixed();
	Fixed(Fixed const &cpFixed);
	Fixed(int const intNumber);
	Fixed(float const floatNumber);
	~Fixed();

	Fixed	&operator=(Fixed const &fNumber);
	int		getRawBits(void) const;
	void	setRawBits(int const rawBits);
	float	toFloat(void)const;
	int		toInt(void)const;
};

std::ostream	&operator<<(std::ostream &outputFile, Fixed const &fN);

#endif
