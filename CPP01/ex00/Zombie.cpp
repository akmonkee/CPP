/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:59:35 by msisto            #+#    #+#             */
/*   Updated: 2025/10/27 12:29:11 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string zName)
{
	this->name = zName;
}

Zombie::~Zombie()
{
	std::cout<< "deconstructed"<<std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

void	randomCump(std::string name)
{
	Zombie	randomZombie(name);
	randomZombie.announce();
}
