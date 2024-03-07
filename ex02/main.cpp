/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:59:16 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/07 21:53:08 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void testSujetList()
{
	std::list<int> mstack;
	mstack.push_back(5);
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	mstack.push_back(17);
	std::cout << LIME "[17] Ajouté!" RST << std::endl;
	std::cout << GRY1 "Sommet de la liste [" GOLD << mstack.back() << GRY1 "] " RST << std::endl;
	mstack.pop_back();
	std::cout << REDD "Sommet retiré !" RST << std::endl;
	std::cout << GRY1 "Taille de la liste [" GOLD << mstack.size() << GRY1 "] " RST << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::cout << LIME "[3] Ajouté!" RST << std::endl;
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	std::cout << LIME "[737] Ajouté!" RST << std::endl;
	std::cout << LIME "[0] Ajouté!" RST << std::endl;
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	int d = 0;
	std::cout << GRY1 ">> Itération dans container >>" RST << std::endl;
	while (it != ite)
	{
		std::cout << GRY1 "[" GOLD << d++ << GRY1 "] " << "- " RST << *it << std::endl;
		++it;
	}
	std::stack<int, std::list<int> > s(mstack);
	std::cout << std::endl;

	// Additional tests
	std::cout << GRY1 ">> Tests supplémentaires list >>" RST << std::endl;
	std::cout << GRY1 "Sommet  [" GOLD << s.top() << GRY1 "] " RST << std::endl;
	s.pop();
	std::cout << REDD "Sommet retiré!" RST << std::endl;
	std::cout << GRY1 "Sommet de la liste [" GOLD << s.top() << GRY1 "] " RST << std::endl;
	std::cout << GRY1 "Taille de la liste [" GOLD << s.size() << GRY1 "] " RST << std::endl;
	std::cout << std::endl;

	// Test avec un itérateur constant
	std::cout << GRY1 ">> Test avec un itérateur constant >>" RST << std::endl;
	std::list<int>::const_iterator cit = mstack.begin();
	std::list<int>::const_iterator cite = mstack.end();
	int e = 0;
	while (cit != cite)
	{
		std::cout << GRY1 "[" GOLD << e++ << GRY1 "] " << "- " RST << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl;
}

void testSujetMutant()
{
	MutantStack<int> mstack;
	mstack.push(5);
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	mstack.push(17);
	std::cout << LIME "[17] Ajouté!" RST << std::endl;
	std::cout << GRY1 "Sommet de la stack [" CYAN << mstack.top() << GRY1 "] " RST << std::endl;
	mstack.pop();
	std::cout << REDD "Sommet retiré !" RST << std::endl;
	std::cout << GRY1 "Sommet de la stack [" CYAN << mstack.top() << GRY1 "] " RST << std::endl;
	std::cout << GRY1 "Taille de la stack [" CYAN << mstack.size() << GRY1 "] " RST << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << LIME "[3] Ajouté!" RST << std::endl;
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	std::cout << LIME "[737] Ajouté!" RST << std::endl;
	std::cout << LIME "[0] Ajouté!" RST << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	int d = 0;
	std::cout << GRY1 ">> Itération dans MutantStack >>" RST << std::endl;
	while (it != ite)
	{
		std::cout << GRY1 "[" CYAN << d++ << GRY1 "] " << "- " RST << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	// Additional tests
	std::cout << GRY1 ">> Tests supplémentaires MutantStack >>" RST << std::endl;
	std::cout << GRY1 "Sommet  [" CYAN << s.top() << GRY1 "] " RST << std::endl;
	s.pop();
	std::cout << REDD "Sommet retiré!" RST << std::endl;
	std::cout << GRY1 "Sommet de la stack [" CYAN << s.top() << GRY1 "] " RST << std::endl;
	std::cout << GRY1 "Taille de la stack [" CYAN << s.size() << GRY1 "] " RST << std::endl;
	std::cout << std::endl;

	// Test avec un itérateur constant
	std::cout << GRY1 ">> Test avec un itérateur constant >>" RST << std::endl;
	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();
	int e = 0;
	while (cit != cite)
	{
		std::cout << GRY1 "[" CYAN << e++ << GRY1 "] " << "- " RST << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl;
}

void testSujetVector()
{
	std::vector<int> mstack;
	mstack.push_back(5);
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	mstack.push_back(17);
	std::cout << LIME "[17] Ajouté!" RST << std::endl;
	std::cout << GRY1 "Sommet du vecteur [" PURP << mstack.back() << GRY1 "] " RST << std::endl;
	std::cout << REDD "Sommet retiré !" RST << std::endl;
	mstack.pop_back();
	std::cout << GRY1 "Sommet du vecteur [" PURP << mstack.back() << GRY1 "] " RST << std::endl;
	std::cout << GRY1 "Taille du vecteur [" PURP << mstack.size() << GRY1 "] " RST << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::cout << LIME "[3] Ajouté!" RST << std::endl;
	std::cout << LIME "[5] Ajouté!" RST << std::endl;
	std::cout << LIME "[737] Ajouté!" RST << std::endl;
	std::cout << LIME "[0] Ajouté!" RST << std::endl;
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	++it;
	--it;
	int d = 0;
	std::cout << GRY1 ">> Itération dans container >>" RST << std::endl;
	while (it != ite)
	{
		std::cout << GRY1 "[" PURP << d++ << GRY1 "] " << "- " RST << *it << std::endl;
		++it;
	}
	std::stack<int, std::vector<int> > s(mstack);
	std::cout << std::endl;

	// Additional tests
	std::cout << GRY1 ">> Tests supplémentaires Vector >>" RST << std::endl;
	std::cout << GRY1 "Sommet du vecteur [" PURP << s.top() << GRY1 "] " RST << std::endl;
	s.pop();
	std::cout << REDD "Sommet retiré!" RST << std::endl;
	std::cout << GRY1 "Sommet du vecteur [" PURP << s.top() << GRY1 "] " RST << std::endl;
	std::cout << GRY1 "Taille du vecteur [" PURP << s.size() << GRY1 "] " RST << std::endl;
	std::cout << std::endl;

	// Test avec un itérateur constant
	std::cout << GRY1 ">> Test avec un itérateur constant >>" RST << std::endl;
	std::vector<int>::const_iterator cit = mstack.begin();
	std::vector<int>::const_iterator cite = mstack.end();
	int e = 0;
	while (cit != cite)
	{
		std::cout << GRY1 "[" PURP << e++ << GRY1 "] " << "- " RST << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl;
}

void	printHeader(const std::string &mess)
{
	std::cout << GRY1 "########################################" << std::endl;
	std::cout << GRY1 << "\t" << mess << std::endl;
	std::cout << GRY1 "########################################" << std::endl;	
}

int main()
{
	std::cout << CLRALL;

	printHeader("TEST AVEC MUTANT STACK");
	testSujetMutant();

	printHeader("TEST AVEC LIST");
	testSujetList();

	printHeader("TEST AVEC VECTOR");
	testSujetVector();

	return (0);
}
