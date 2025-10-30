/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:20 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 11:43:02 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->name = name;
	this->type = NULL;
}

void	HumanB::setWeapon(Weapon& wep)
{
	this->type = &wep;
}

void	HumanB::attack()
{
	if (!this->type)
		std::cout<<name<<" attacks with their hands"<<std::endl;
	else
		std::cout<<name<<" attacks with their "<<type->getType()<<std::endl;
}

HumanB::~HumanB()
{

}
