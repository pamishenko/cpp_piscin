/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:35:06 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 17:30:24 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	std::string const	_name;
	short int			_grade;
	
protected:
	void				_checkGrade();

class GradeTooHighException : public std::exception {
public:
	virtual const char* what() const throw()
	{
			return ("\e[0;31mERROR Grade too high\e[0m");
	}
};

class GradeTooLowException : public std::exception {
public:
	virtual const char* what() const throw()
	{
		return ("\e[0;31mERROR Grade too low\e[0m");
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

};

#endif