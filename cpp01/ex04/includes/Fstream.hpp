/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fstream.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:50:03 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/15 00:15:51 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

class Fstream
{
private:
	std::string	_fileName;
	std::string	_buffer;
	std::string	_s1;
	std::string	_s2;
public:
	Fstream(std::string fileName, std::string s1, std::string s2);
	~Fstream();
	
	int	read();
	int	replace();
	int	write();
};
  