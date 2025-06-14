/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:42 by msisto            #+#    #+#             */
/*   Updated: 2025/06/07 19:48:47 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	action;

	while (action != "EXIT")
	{
		std::cout << "Action options:\nADD\nSEARCH\nEXIT\n";
		if (!std::getline(std::cin, action))
			break ;
		if (action == "ADD")
			book.add();
		if (action == "SEARCH")
			book.search();
	}
}
