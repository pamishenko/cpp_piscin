/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:22:33 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 13:39:00 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
private:

protected:
	std::string _type;
	AAnimal(std::string typeName);

public:
	AAnimal();
	AAnimal(AAnimal const & animal);
	virtual ~AAnimal();

	AAnimal		&operator=(AAnimal const &otherAnimal);

	virtual		void makeSound() const;
	std::string	getType() const;
};

#endif
