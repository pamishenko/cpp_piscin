/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 07:45:48 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/18 08:56:29 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int		_rawBits;
	static int const	_fractionalBits = 8;
public:
	Fixed();
	Fixed(Fixed const &cpFixed);
	~Fixed();

	Fixed	&operator=(Fixed const &fractionalBits);
	int		getRawBits(void) const;
	void	setRawBits(int const rawBits);
};

#endif
