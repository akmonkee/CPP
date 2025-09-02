/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:57:04 by msisto            #+#    #+#             */
/*   Updated: 2025/09/02 12:03:25 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout<<&str<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<&stringREF<<std::endl;

	std::cout<<str<<std::endl;
	std::cout<<*stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;
}
