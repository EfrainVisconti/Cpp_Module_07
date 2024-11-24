/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:48:53 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/24 20:55:57 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>
void	iter(T *arr, std::size_t len, F func)
{
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}

// template <typename T>
// void	iter(T *arr, std::size_t len, void (*func)(T))
// {
// 	for (std::size_t i = 0; i < len; i++)
// 		func(arr[i]);
// }

// template <typename T>
// void	iter(T *arr, std::size_t len, void (*func)(T&))
// {
// 	for (std::size_t i = 0; i < len; i++)
// 		func(arr[i]);
// }

#endif