/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:27 by msisto            #+#    #+#             */
/*   Updated: 2025/09/25 11:36:43 by msisto           ###   ########.fr       */
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

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"attacks "<< target <<", causing "<< this->attackDamage << " points of damage!\n";
		this->energyPoints--;
	}
	else
		std::cout<<"ClapTrap is too tired for that\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap hit a wall and took "<<amount<<" damage\n";
	this->hitPoints=- amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"ClapTrap found some parts and healed "<<amount<<" hp\n";
		this->hitPoints =+ amount;
		this->energyPoints--;
	}
	else
		std::cout<<"ClapTrap is too tired for that\n";
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Claptrap fell off the stairs\n";
}
