/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:33:50 by msisto            #+#    #+#             */
/*   Updated: 2025/09/02 14:16:07 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& wep)
{
	this->name = name;
	this->type = &wep;
}

void	HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<type->getType()<<std::endl;
}

HumanA::~HumanA()
{

}
