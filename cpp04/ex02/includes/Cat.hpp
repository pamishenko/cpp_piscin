/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:23:47 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:41:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
#include "../includes/Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_catsBrain;
	
public:
	Cat();
	Cat(Cat const &cat);
	~Cat();
	Cat		&operator=(Cat const &otherCat);
	Brain	*getBrain() const;
	
	void	makeSound() const;
};

#endif