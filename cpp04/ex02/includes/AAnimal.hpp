/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:22:33 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 14:09:14 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

	virtual		void makeSound() const = 0;
	std::string	getType() const;
};

#endif
