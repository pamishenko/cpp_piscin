/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:35:06 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:43:41 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
#include "../includes/Defines.hpp"

 class AForm;

class Bureaucrat {
private:
	std::string const	_name;
	short int			_grade;
	
protected:
	void	_checkGrade();

class GradeTooHighException : public std::exception {
public:
	virtual const char* what() const throw()
	{
			return ("Exeption Grade too high");
	}
};

class GradeTooLowException : public std::exception {
public:
	virtual const char* what() const throw()
	{
		return ("Exeption: Grade too low");
	}
};

public:
	Bureaucrat();
	Bureaucrat(std::string name, short int grade);
	Bureaucrat(Bureaucrat const &buerocrat);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &otherBureaucrat);
	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();
	void		signForm(AForm &form);

};

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &bureaucrat);

#endif
