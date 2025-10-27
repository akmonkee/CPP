/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:59:35 by msisto            #+#    #+#             */
/*   Updated: 2025/10/27 12:30:27 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string &zName)
{
	this->name = zName;
}

Zombie::~Zombie()
{
	std::cout<< "deconstructed"<<std::endl;
}

Zombie	*zombieHorde(int N, std::string Name)
{
	Zombie *zombieArray;
	zombieArray = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombieArray[i].setName(Name);
	return (zombieArray);
}
