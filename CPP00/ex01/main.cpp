/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:42 by msisto            #+#    #+#             */
/*   Updated: 2025/06/07 15:29:46 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	action;

	while (action != "EXIT")
	{
		std::cout << "Action options:\nADD\nSEARCH\nEXIT\n";
		if (!std::getline(std::cin, action))
			break ;
		if (action == "ADD")
			std::cout << "ADD\n";
		if (action == "SEARCH")
			std::cout << "SEARCH\n";
	}
}
