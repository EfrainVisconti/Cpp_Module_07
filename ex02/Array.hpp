/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:13:12 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/26 17:06:43 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
	T				*_array;
	unsigned int	_size;

	public:

	/* Orthodox canonical form */
	Array() : _array(new T[0]), _size(0) {}

	Array(unsigned int n) : _array(new T[n]), _size(n) {}

    Array(Array const &other)
	{
		this->_array = NULL;
		*this = other;
	}

	~Array()
	{
		if (this->_array != NULL)
			delete [] this->_array;
	}

    Array	&operator=(const Array &other)
	{
		if (this == &other)
			return *this;
		if (this->_array != NULL)
			delete [] this->_array;
		this->_size = other._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
		return *this;
	}

	/* Public methods and operator overloads */
	unsigned int	size() const
	{
		return this->_size;
	}

	T	&operator[](unsigned int index) const
	{
		if (index >= this->_size || index < 0)
			throw std::out_of_range("Invalid [] index");
		return this->_array[index];
	}
};

#endif