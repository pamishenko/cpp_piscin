/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:04:19 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 18:58:53 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &Form);
	~ShrubberyCreationForm() {};

	bool execute(Bureaucrat const &executor) const;
	

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &otherForm);
};

#endif
