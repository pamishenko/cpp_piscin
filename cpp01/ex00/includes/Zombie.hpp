/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 13:56:19 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/13 20:37:55 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie{
private:
	std::string	_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	void	randomChump(std::string name);
	Zombie*	newZombie(std::string name);
};
