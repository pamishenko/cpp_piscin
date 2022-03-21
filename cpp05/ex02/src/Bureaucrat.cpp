/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:17 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/21 22:07:17 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Defines.hpp"

void	Bureaucrat::_checkGrade() {
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Twanda Tanja"), _grade(99) {
	std::cout << GREEN << "create buereaucrat " << _name << END_COLOR << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, short int grade) : _name(name), _grade(grade)
{
	_checkGrade();
	std::cout << GREEN << "Bureaucrat " << _name << " grade "
				<< _grade << " create" << END_COLOR << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(){
	std::cout << DARK_RED << "Bureaucrat " << _name << " destroyed" << END_COLOR << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &otherBureaucrat)
{
	_grade = otherBureaucrat.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incGrade()
{
	_grade++;
	try
	{
		_checkGrade();
	}
	catch(const std::exception& ex)
	{
		_grade-- ;
		std::cerr << RED << ex.what() << " ";
		std::cerr << getName() << " " << getGrade() << END_COLOR << std::endl;
	}
}

void	Bureaucrat::decGrade()
{
	_grade--;
	try
	{
		_checkGrade();
	}
	catch(const std::exception& ex)
	{
		_grade++;
		system("04");
		std::cerr << RED << ex.what() << " ";
		std::cerr << getName() << " " << getGrade() << END_COLOR << std::endl;
	}
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& ex)
	{
		std::cerr << RED << _name << " cannot sign " << form.getName() << ex.what() << END_COLOR << std::endl;
		return ;
	}
	std::cout	<< GREEN << _name << " sign " << form.getName() << END_COLOR << std::endl;
}

std::ostream &operator<<(std::ostream &outputFile, Bureaucrat const &bureaucrat){
	outputFile << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (outputFile);
}
