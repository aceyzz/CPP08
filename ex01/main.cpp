/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lsaunne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:59:35 by cedmulle          #+#    #+#             */
/*   Updated: 2024/03/06 20:01:14 by cedmulle         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	mainSubject()
{
	std::cout << BLUE "#### Main du Sujet (Nul nul nul) ####" RST << std::endl;

	std::cout << GRY1 "Devrait afficher ceci:\n";
	std::cout << LIME "2\n14\n\n" RST;

	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << PURP "\nC'est nul hein ? Regarde plus bas." << std::endl << std::endl;

	return ;
}

int main(void)
{

	std::cout << CLRALL;

	mainSubject();

	// Création d'un Span avec une capacité de 5
	std::cout << BLUE "#### Création Span avec size de 5 ####" RST;
	Span sp = Span(5);

	// Ajout de nombres
	std::cout << GRY1 "\n##############################################" << std::endl;
	std::cout << "Ajout de nombres au Span" << std::endl;
	std::cout << "##############################################" RST << std::endl;
	sp.addNumber(6);
	std::cout << LIME "Ajouté 6" RST << std::endl;
	sp.addNumber(3);
	std::cout << LIME "Ajouté 3" RST << std::endl;
	sp.addNumber(17);
	std::cout << LIME "Ajouté 17" RST << std::endl;
	sp.addNumber(9);
	std::cout << LIME "Ajouté 9" RST << std::endl;
	sp.addNumber(11);
	std::cout << LIME "Ajouté 11" RST << std::endl;

	// Tentative d'ajouter un nombre supplémentaire (devrait échouer)
	try
	{
		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Tentative d'ajouter un nombre supplémentaire" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		sp.addNumber(13);
	}
	catch (const std::exception& e)
	{
		std::cout << REDD "Erreur : " << e.what() << RST << std::endl;
	}

	// Calcul et affichage du span le plus court et du plus long
	try
	{
		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Calcul du span le plus court" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		std::cout << CYAN "Span le plus court : " << sp.shortestSpan() << RST << std::endl;

		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Calcul du span le plus long" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		std::cout << GOLD "Span le plus long : " << sp.longestSpan() << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << REDD "Erreur : " << e.what() << RST << std::endl;
	}

	// Création d'un Span vide pour tester le calcul du span sans nombres
	std::cout << BLUE "\n\n\n#### Création Span vide ####" RST;
	Span emptySpan = Span(10);
	try
	{
		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Tentative de calcul du span le plus court dans un Span vide" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		std::cout << "Span le plus court : " << emptySpan.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << REDD "Erreur : " << e.what() << RST << std::endl;
	}

	std::cout << BLUE "\n\n\n#### Création Span avec size de 10'000 ####" RST;
	Span big = Span(10000);
	std::vector<int> values;

	int saved = 0;

	std::cout << GRY1 "\n##############################################" << std::endl;
	std::cout << "Add valeurs selon ces règles" << std::endl;
	std::cout << "##############################################" RST << std::endl;
	std::cout << LIME "Index 0:\t1000\nIndex pair:\t1100\nIndex impair:\t3100\nLast:\t\t201'000" RST << std::endl;
	values.push_back(1000);
	for (int i = 0; i < 9998; i++)
	{
		saved++;
		if (saved % 2 == 0)
			values.push_back(1100);
		else
			values.push_back(3100);
	}
	values.push_back(201000);
	
	std::cout << BLUE "\n>> Appel de addNumber surchargée\n- Smallest doit etre 100\n- Biggest doit etre 200'000" RST << std::endl;

	try
	{
		big.addNumber(values.begin(), values.end());
		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Calcul du span le plus court" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		std::cout << CYAN "Span le plus court : " << big.shortestSpan() << RST << std::endl;

		std::cout << GRY1 "\n##############################################" << std::endl;
		std::cout << "Calcul du span le plus long" << std::endl;
		std::cout << "##############################################" RST << std::endl;
		std::cout << GOLD "Span le plus long : " << big.longestSpan() << RST << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << REDD "Erreur : " << e.what() << RST << std::endl;
	}

	std::cout << std::endl << std::endl;

	return (0);
}