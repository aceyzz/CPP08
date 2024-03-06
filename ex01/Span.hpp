/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:44:14 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 19:44:25 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <set>
#include <algorithm>
#include <limits>
#include "colors.hpp"

class	Span
{
	public:
		// CONSTRUCTOR & DESTRUCTOR
		Span(uint N);
		Span();
		Span(const Span &src);
		Span& operator=(const Span &src);
		~Span();

		// MANDATORY MEMBERS
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();

		// IMPROVED ADDNUMBER() asked for evaluation
		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		}


		// EXCEPTIONS CUSTOM
		class MaxCapacityException : public std::exception
		{
			public:
				virtual const char*	what() const throw() { return (REDD "Set is full !" RST); }
		};

		class InvalidSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return (REDD "Invalid Span !" RST); }
		};

	private:
		std::set<int>	_numbers;
		uint			_maxSize;
};
