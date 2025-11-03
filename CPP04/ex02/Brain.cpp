/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:02:58 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:17:00 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<< "\033[32m" << "creating brain\n" << "\033[0m";
	Ideas = new std::string[100];
}

Brain::Brain(const Brain& obj)
{
	std::cout<< "\033[33m" << "brain copy\n" << "\033[0m";
	int i = 0;
	Ideas = new std::string[100];
	while (i < 100)
	{
		Ideas[i] = obj.Ideas[i];
		i++;
	}
}

Brain&	Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		int i = 0;
		Ideas = new std::string[100];
		while (i < 100)
		{
			Ideas[i] = obj.Ideas[i];
			i++;
		}
	}
	return *this;
}

std::string*	Brain::getIdeas() const
{
	return Ideas;
}

void	Brain::setIdeas(const std::string *I)
{
	int i = 0;
	Ideas = new std::string[100];
	while (i < 100)
	{
		Ideas[i] = I[i];
		i++;
	}
}

Brain::~Brain()
{
	std::cout<< "\033[31m" << "deleting brain\n" << "\033[0m";
	delete[] this->Ideas;
}
