/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:45 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:41:06 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
#include "../includes/Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_dogsBrain;
	
public:
	Dog();
	Dog(Dog const & cat);
	~Dog();
	Dog		&operator=(Dog const & otherCat);
	Brain	*getBrain() const;

	void	makeSound() const;
};

#endif