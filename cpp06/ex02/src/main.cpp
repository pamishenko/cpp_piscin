/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 23:35:40 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/26 00:31:20 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "../includes/defines.hpp"
#include <unistd.h>

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};


Base *generate()
{
	Base *ptr;
	int rand;

	std::srand((unsigned int)time(NULL));
	rand = std::rand() % 3;
	if (rand == 0)
	{
		ptr = new A();
		std::cout << "Generated class A" << std::endl;
	}
	else if (rand == 1)
	{
		ptr = new B();
		std::cout << "Generated class B" << std::endl;
	}
	else
	{
		ptr = new C();
		std::cout << "Generated class C" << std::endl;
	}
	return ptr;
}

void identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "it is ptr A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "it is ptr B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "it is ptr C" << std::endl;
}

void identify(Base& ptr)
{
	Base tmp;
	try 
	{
		tmp = dynamic_cast<A &>(ptr);
		std::cout << "it is ref A" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try 
	{
		tmp = dynamic_cast<B &>(ptr);
		std::cout << "it is ref B" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try 
	{
		tmp = dynamic_cast<C &>(ptr);
		std::cout << "it is ref C" << std::endl;

	}
	catch (std::exception &e)
	{
	}
}

int main(){

	int color = 1;
	
	for (int i = 0; i < 7; i++){
		if (color > 0)
			std::cout << BLUE; 
		Base	*ptr = generate();
		Base	&ref = *ptr;
		identify(ptr);
		identify(ref);
		std::cout << END_COLOR;
		color *= -1;
		delete ptr;
		usleep(300000);
	}
}