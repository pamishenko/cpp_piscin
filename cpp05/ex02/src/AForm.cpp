/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:48:22 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:29:51 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/Defines.hpp"

void	AForm::_checkGrade(void) const
{
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
		throw AForm::GradeTooHighException();
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm() : _name("EMPTY BLANK"),  _isSigned(false), _gradeToSign(150) ,
					_gradeToExecute(150){
	std::cout << GREEN << "default constructor" << END_COLOR << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToexecute) :
					_name(name),
					_isSigned(false),
					_gradeToSign(gradeToSign),
					_gradeToExecute(gradeToexecute) 
{
	this->_checkGrade();
	std::cout << GREEN << "Form created. " << this->getName() << END_COLOR << std::endl;
}

AForm::AForm(AForm const &form) : _name(form.getName()),
			 _gradeToSign(form.getGradeToSign()),
			 _gradeToExecute(form.getGradeToExecute()){
	_isSigned = form.getIsSigned();
	std::cout << YELLOW << "copy constructor " << _name << END_COLOR << std::endl;
}

AForm::~AForm() {
	std::cout << DARK_RED << "destructor form's " << _name << END_COLOR << std::endl; 
}

AForm	&AForm::operator=(AForm const &otherForm){
	_isSigned = otherForm.getIsSigned();
	return *this;
}

std::string	AForm::getName() const{
	return (_name);
}

int	AForm::getGradeToSign() const{
	return (_gradeToSign);
}

int	AForm::getGradeToExecute() const{
	return (_gradeToExecute);
}

bool	AForm::getIsSigned() const{
	return (_isSigned);
}


std::string	AForm::getTarget() const
{
	return (_target);
}

void	AForm::setTarget(std::string target)
{
	this->_target = target;
}

void	AForm:: beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() > this->getGradeToSign())
	{
		throw AForm::GradeTooLowException();
	}
	else
		_isSigned = true;
}

bool	AForm::execute(Bureaucrat const &executor) const
{
	bool result = false;
	
	if (!this->_isSigned)
	{
		throw AForm::NoSignedExeption();
		return result;
	}
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw AForm::GradeTooLowException();
		return result;
	}
	result = true;
	return result;
}

std::ostream &operator<<(std::ostream &outputFile, AForm const &form)
{
	outputFile	<< "Form: " << form.getName() << " " << form.getGradeToSign()
				<< " " << form.getGradeToExecute() << " Status signed: ";
	if (form.getIsSigned())
		outputFile << DARK_GREEN << "Yes." << END_COLOR << std::endl;
	else
		outputFile << DARK_RED << "No." << END_COLOR << std::endl;
	return (outputFile);
}
