/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:47:56 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/24 21:09:23 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	intPrint(int nbr)
{
	std::cout << nbr << " ";
}

void	intUpdate(int &nbr)
{
	nbr *= 10;
}

void	strUpdate(std::string &str)
{
	str = "* " + str + " *";
}

void	strPrint(std::string str)
{
	std::cout << str << " ";
}

int	main(void)
{
	int	arr1[5] = {1, 2, 3, 4, 5};
	std::string	arr2[4] = {"hola", "hello", "ciao", "hallo"};

	std::cout << "Original int array:" << std::endl;
	::iter(arr1, 5, intPrint);
	::iter(arr1, 5, intUpdate);
	std::cout << std::endl << "Updated int array:" << std::endl;
	::iter(arr1, 5, intPrint);
	std::cout << std::endl << "Original str array:" << std::endl;
	::iter(arr2, 4, strPrint);
	::iter(arr2, 4, strUpdate);
	std::cout << std::endl << "Updated str array:" << std::endl;
	::iter(arr2, 4, strPrint);
	std::cout << std::endl;
	return 0;
}