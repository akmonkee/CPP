/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:42 by msisto            #+#    #+#             */
/*   Updated: 2025/10/28 15:05:56 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	action;

	while (1)
	{
		std::cout << "Action options:\nADD\nSEARCH\nEXIT\n";
		if (!(std::cin >> action))
			break ;
		if (action == "ADD")
			book.add();
		if (action == "SEARCH")
			book.search();
		if (action == "EXIT")
			break ;
	}
}
