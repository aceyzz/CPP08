/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:52:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 13:52:26 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << CLRALL;

	std::vector<int> vec = {1, 2, 3, 4, 5};
	try
	{
		std::vector<int>::iterator found = easyfind(vec, 6);
		std::cout << LIME "Found in vector: " GOLD << *found << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::vector<int>::iterator found = easyfind(vec, 3);
		std::cout << LIME "Found in vector: " GOLD << *found << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> lst = {5, 4, 3, 2, 1};
	try
	{
		std::list<int>::iterator found = easyfind(lst, 6);
		std::cout << LIME "Found in list: " GOLD << *found << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::list<int>::iterator found = easyfind(lst, 3);
		std::cout << LIME "Found in list: " GOLD << *found << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
