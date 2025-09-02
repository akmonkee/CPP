/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:42 by msisto            #+#    #+#             */
/*   Updated: 2025/09/02 14:22:31 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	this->type = type;
}

std::string Weapon::getType() const
{
	return type;
}

void	Weapon::setType(const std::string& type)
{
	this->type = type;
}

Weapon::~Weapon()
{

}
