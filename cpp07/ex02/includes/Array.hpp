/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:01:32 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/26 14:25:25 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T*	_array;
	int	_len;
	
public:
	Array<T>() : _array(new T[0]()), _len (0){};
	Array<T>(unsigned int len) : _array(new T[len]()), _len(len){};
	
	Array<T>(Array const &src){
		_array = new T[src.size()]();
		_len = src.size();
		for (int i = 0; i < _len; i++)
			_array[i] = src._array[i];
	};

	
	~Array<T>() {
		delete [] _array;
	};
	
	Array<T> &operator=(Array const &otherArray){
		this->_array = new T(otherArray.size);
		this->_len = otherArray,size();
		for (int i = 0; i < this->_len; i++){
			this->_array[i] = otherArray._array[i];
		}
	};

	T &operator [](const int i){
		if ((i < 0) || (i >= _len))
			throw std::exception();
		return (_array[i]);
	}
	
	int size() const {return _len;}
	};

#endif
