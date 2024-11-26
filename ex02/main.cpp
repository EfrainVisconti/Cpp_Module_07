/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:14:32 by eviscont          #+#    #+#             */
/*   Updated: 2024/11/26 18:10:43 by eviscont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Array.hpp"

#define MAX_VAL 10

const std::string RESET = "\033[0m";
const std::string GREEN = "\033[32m";

int main()
{
	/* Testing with Arrays of int */
	std::cout << GREEN << "-----Testing with Arrays of int-----" << RESET << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        int value = rand() % 100 + 1;
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		else
			std::cout << numbers[i] << "=" << mirror[i] << " ";
    }

	std::cout << std::endl << std::endl << GREEN << "-----Checking index exception-----" << RESET << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	/* Testing with Arrays of std::string */
	std::cout << std::endl << GREEN << "-----Testing with Arrays of std::string-----" << RESET << std::endl;
	Array<std::string> strings(MAX_VAL);
	std::ostringstream aux;
	for (int i = 0; i < MAX_VAL; i++)
	{
		aux.str("");
		aux << i;
		strings[i] = "str_" + aux.str();
	}
	Array<std::string> copy(strings);
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (strings[i] != copy[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		else
			std::cout << strings[i] << "=" << copy[i] << " ";
    }

	std::cout << std::endl << std::endl << GREEN << "----Checking what happens when values are changed (copy constructor)----"<< RESET << std::endl;
	try
	{
		std::cout << "strings[0] before: " << strings[0] << std::endl;
		strings[0] = "strings_new";
		std::cout << "strings[0] after: " << strings[0] << std::endl;
		std::cout << "copy[0] before: " << copy[0] << std::endl;
		copy[0] = "copy_new";
		std::cout << "copy[0] after: " << copy[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    delete [] mirror;
    return 0;
}