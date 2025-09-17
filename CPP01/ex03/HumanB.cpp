/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:20 by msisto            #+#    #+#             */
/*   Updated: 2025/09/05 10:54:37 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& wep)
{
	this->type = &wep;
}

void	HumanB::attack()
{
	std::cout<<name<<" attacks with their "<<type->getType()<<std::endl;
}

HumanB::~HumanB()
{

}
