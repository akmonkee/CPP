/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:27 by msisto            #+#    #+#             */
/*   Updated: 2025/09/24 12:20:42 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Claptrap created\n";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout<<"Claptrap copy requested\n";
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout<<"Claptrap backup requested\n";
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	return *this;
}

//void	ClapTrap::attack(const std::string& target)
//{
//	//std::cout<<"ClapTrap"<< <name> <<"attacks"<< <target> <<", causing"<< <damage> << "points of damage!\n";
//}
//
//void	ClapTrap::takeDamage(unsigned int amount)
//{
//
//}
//
//void	ClapTrap::beRepaired(unsigned int amount)
//{
//
//}

ClapTrap::~ClapTrap()
{
	std::cout<<"Claptrap destroyed\n";
}
