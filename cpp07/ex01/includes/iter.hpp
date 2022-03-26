/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttanja <ttanja@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:28:25 by ttanja            #+#    #+#             */
/*   Updated: 2022/03/26 10:40:13 by ttanja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T> void	iter(T *array, int lenght, void (*function) (T &));
template<typename T> void	print(T str);
template<typename T> void	printX2(T str);

#endif
