/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:41 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/23 14:15:32 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &first, T &second)
{
	T aux = first;
	first = second;
	second = aux;
}

template <typename T>
T	min(const T& first, const T& second)
{
    return first < second ? first : second;
}

template <typename T>
T	max(const T& first, const T& second)
{
    return first > second ? first : second;
}

#endif