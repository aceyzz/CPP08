/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:52:09 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 19:13:14 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	tryEasyFind(T &container, int value)
{
	try
	{
		easyfind(container, value);
		std::cout << LIME "Element " GOLD << "(" << value << ") " << LIME "found !" << RST << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << GOLD " (" << value << ")" RST << std::endl;
	}
	
}

void	drawHeader(const std::string &mess)
{
	std::cout << GRY1 "#######################################" << std::endl;
	std::cout << mess << std::endl;
	std::cout << "#######################################" RST << std::endl;
}

int	main(void)
{
	std::cout << CLRALL;

	std::vector<int> vec;
	drawHeader("INIT VECTOR OF  VALUES [1,2,3,4,5]");
	for (int i = 0; i < 5; i++)
		vec.push_back(i + 1);
	std::cout << std::endl;
	
	drawHeader("TRY TO FIND THE VALUE 3 (should find)");
	tryEasyFind(vec, 3);
	std::cout << std::endl;
	
	drawHeader("TRY TO FIND THE VALUE 6 (should crash)");
	tryEasyFind(vec, 6);
	std::cout << std::endl;

	
	std::list<int> lst;
	drawHeader("INIT LIST OF VALUES [1,2,3,4,5]");
	for (int i = 0; i < 5; i++)
		lst.push_back(i + 1);
	std::cout << std::endl;

	drawHeader("TRY TO FIND THE VALUE 3 (should find)");
	tryEasyFind(lst, 1);
	std::cout << std::endl;

	drawHeader("TRY TO FIND THE VALUE 6 (should crash)");
	tryEasyFind(lst, -2);
	std::cout << std::endl;
	
	return (0);
}
