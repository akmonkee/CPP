/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:59:35 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 15:52:33 by msisto           ###   ########.fr       */
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
	std::cout<< this->name <<" deconstructed"<<std::endl;
}
