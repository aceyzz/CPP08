/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:52:17 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 13:52:17 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include "colors.hpp"

class	NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return (REDD "Element not found!" RST);
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int element)
{
	typename T::iterator i = std::find(container.begin(), container.end(), element);

	if (i == container.end())
		throw (NotFoundException());
	return (i);
}
