/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:28:09 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/26 11:41:21 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *array, int lenght, void (*function) (T &)) {

	for (int i = 0; i < lenght; i++) {
		function(array[i]);
	}
}

template<typename T>
void printX2(T i){
	std::cout << "print X2->> " << i << "  +  " << i << std::endl;
}

template<typename T>
void print(T i) {
	std::cout << "print-> " << i << std::endl;
}

int main() {
	std::string arrString[3] = {"dlfkg", ";lkj", "343eesdf"};
	char	arrChar[3] = {'a', 'x', 100};
	int		arrInt[4] = {999, -2342, 0, 123};
	float	arrFloat[3] = {1.32f, 2.45f, 3.012f};
	iter(arrString, 3, print);
	iter(arrChar, 3, printX2);
	iter(arrInt, 4, print);
	iter(arrFloat, 3, printX2);
	return 0;
}
