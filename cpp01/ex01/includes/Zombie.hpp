/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:36:59 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/13 21:13:46 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie{
private:
	std::string	_name;

public:
	Zombie();
	~Zombie();
	void	announce();
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
