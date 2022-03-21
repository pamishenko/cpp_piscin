/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:48:22 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:26:04 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Defines.hpp"

void	Form::_checkGrade(void) const
{
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : _name("EMPTY BLANK"),  _isSigned(false), _gradeToSign(150) , _gradeToExecute(150){
	std::cout << GREEN << "default constructor" << END_COLOR << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToexecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToexecute) 
{
	this->_checkGrade();
	std::cout << GREEN << "Form created. " << this->getName() << END_COLOR << std::endl;
}

Form::Form(Form const &form) : _name(form.getName()),
			 _gradeToSign(form.getGradeToSign()),
			 _gradeToExecute(form.getGradeToExecute()){
	_isSigned = form.getIsSigned();
	std::cout << "copy constructor " << _name << std::endl;
}

Form::~Form() {
	std::cout << DARK_RED << "destructor form's " << _name << END_COLOR << std::endl; 
}

Form	&Form::operator=(Form const &otherForm){
	_isSigned = otherForm.getIsSigned();
	return *this;
}

std::string	Form::getName() const{
	return (_name);
}

int	Form::getGradeToSign() const{
	return (_gradeToSign);
}

int	Form::getGradeToExecute() const{
	return (_gradeToExecute);
}

bool	Form::getIsSigned() const{
	return (_isSigned);
}

void	Form:: beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw Form::GradeTooLowException();
	}
	else
		_isSigned = true;
}

std::ostream &operator<<(std::ostream &outputFile, Form const &form)
{
	outputFile	<< "Form: " << form.getName() << " " << form.getGradeToSign()
				<< " " << form.getGradeToExecute() << " Status signed: ";
	if (form.getIsSigned())
		outputFile << DARK_GREEN << "Yes." << END_COLOR << std::endl;
	else
		outputFile << DARK_RED << "No." << END_COLOR << std::endl;
	return (outputFile);
}
