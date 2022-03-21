/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:47:50 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:42:26 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include  <iostream>
#include "Bureaucrat.hpp"
#include "../includes/Defines.hpp"

class Bureaucrat;

class AForm {
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	std::string			_target;


protected:
	AForm();
	void	_checkGrade() const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exception: Grade too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exception: Grade too low");
			}
	};

	class NoSignedExeption : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Exeption: Form no signed");
			}
	};

public:
	AForm(std::string name, int gradeToSign, int gradeToexecute);
	AForm(AForm const& form);
	virtual ~AForm();
	
	AForm			&operator=(AForm const &otherForm);

	std::string		getName() const;
	bool			getIsSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	std::string		getTarget() const;
	
	void			setTarget(std::string target);
	
	void			beSigned(Bureaucrat const & bureaucrat);
	virtual bool	execute(Bureaucrat const &executor) const = 0;
};

#endif
