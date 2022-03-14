/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:44:04 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/15 00:35:51 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <string.h>
#include "../includes/Fstream.hpp"

int	main(int argc, char **argv){
	if (argc != 4)
		{
			std::cout << "enter valid arguments 1)Filename 2)str original 3)str replace " << std::endl;
			return (0);
		}
	if (!strcmp(argv[1], "") || !strcmp(argv[2], "") || !strcmp(argv[3], "")){
		std::cerr << "empty input" << std::endl;
		return (1);
	}
	Fstream stream(argv[1], argv[2], argv[3]);
	
	if (!stream.read()){
		std::cerr << "error read" << std::endl;
		return (0);
	}
	stream.replace();
	if (!stream.write()){
		std::cerr << "error write" << std::endl;
		return (1);
	}
	return (0);
}
