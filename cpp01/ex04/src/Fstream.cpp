/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fstream.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:20:21 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/15 00:27:55 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fstream.hpp"

Fstream::Fstream(std::string fileName, std::string s1, std::string s2){
	this->_fileName = fileName;
	this->_s1 = s1;
	this->_s2 = s2;
}

Fstream::~Fstream(){
}

int	Fstream::read(){
	std::ifstream	readFile(this->_fileName);
	std::string		line;
	int				count = 1;

	if (readFile.fail())
	{
		std::cout << "error open file " << this->_fileName << std::endl;
		exit(1);
	}
	if (readFile.is_open()){
		while(std::getline(readFile, line)){
			std::cout << line << "\n";
			this->_buffer.append(line);
			this->_buffer.append("\n");
			count++;

		}
		readFile.close();
		return (count);
	}
		return (0);
}

int	Fstream::replace(){
	int	s1Len = this->_s1.length();
	int	p = this->_buffer.find(this->_s1);
	int	count = 0;

	while (p >= 0){
		if (p >= 0){
			this->_buffer.erase(p, s1Len);
			this->_buffer.insert(p, this->_s2);
			count++;
		}
	}
	return (count);
}

int	Fstream::write(){
	std::string		file = this->_fileName + ".replace";
	std::ofstream	writeFile(file, std::ios::out);
	if (writeFile.is_open()){
		writeFile << this->_buffer << std::endl;
		return (1);
	}
	return (0);
}
