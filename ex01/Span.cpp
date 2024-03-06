/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:47:15 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 19:57:30 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}
Span::Span(const Span &src) { *this = src; }

Span& Span::operator=(const Span &src)
{
	 if (this != &src)
	 	*this = src;
	 return (*this);
}

Span::Span(uint N) : _maxSize(N) {}
Span::~Span() {}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw MaxCapacityException();
	_numbers.insert(number);
}

int		Span::shortestSpan()
{
	if (_numbers.size() < 2)
		throw InvalidSpanException();

	int	shortest = std::numeric_limits<int>::max();
	// Init du shortest a la valeur max (askip c'est courant)

	std::set<int>::iterator prev = _numbers.begin();
	// Iterateur au debut 

	// Boucle avec iterateur +1 pour trouver span de l'element suivant / precedent
	for (std::set<int>::iterator it = ++_numbers.begin(); it != _numbers.end(); it++)
	{
		shortest = std::min(shortest, *it - *prev);
		// On stocke le plus petit, entre n et n+1 et la valeur precedemment stockée
		prev = it;
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw InvalidSpanException();
	
	return (*_numbers.rbegin() - *_numbers.begin());
}
