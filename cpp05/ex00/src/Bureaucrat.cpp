/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:33:17 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/20 17:26:20 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

void	Bureaucrat::_checkGrade() {
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Twanda Tanja"), _grade(99) {
	std::cout << "create buereaucrat " << _name << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, short int grade) : _name(name), _grade(grade)
{
	_checkGrade();
	std::cout << "Bureaucrat " << _name << " grade "
				<< _grade << " create" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat " << _name << " destroyed" << std::endl;
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
		std::cerr << ex.what() << " ";
		std::cerr << getName() << " " << getGrade() << std::endl;
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
		std::cerr << ex.what() << " ";
		std::cerr << getName() << " " << getGrade() << std::endl;
	}
}
