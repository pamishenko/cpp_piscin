/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:47:50 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:13:14 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include  <iostream>
#include "Bureaucrat.hpp"
#include "../includes/Defines.hpp"

class Bureaucrat;

class Form {
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;

	void				_sign(int grade);
	
protected:
	void	_checkGrade(void) const;

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


public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToexecute);
	Form(Form const& form);
	~Form();
	
	Form	&operator=(Form const &otherForm);

	std::string	getName() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	bool		getIsSigned() const;

	void		beSigned(Bureaucrat const & bureaucrat);
};

std::ostream &operator<<(std::ostream &outputFile, Form const &form);

#endif
