/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:02:58 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 12:52:24 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"creating brain\n";
	Ideas = new std::string[100];
}

Brain::Brain(const Brain& obj)
{
	std::cout<<"brain copy\n";
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
	std::cout<<"brain = operator copy\n";
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
	std::cout<<"deleting brain\n";
	delete[] this->Ideas;
}
