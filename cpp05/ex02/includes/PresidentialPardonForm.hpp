/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:05:02 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 08:43:27 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& Form);
	~PresidentialPardonForm() {};

	bool	execute(Bureaucrat const &executor) const;

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &otherForm);
};

#endif
