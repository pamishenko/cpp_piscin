/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:45:23 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/25 23:00:28 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

typedef struct	Data
{
	int x;
	int y;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

void printData(Data const &data);

#endif
