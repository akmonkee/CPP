/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:27 by msisto            #+#    #+#             */
/*   Updated: 2025/10/16 13:26:14 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"Claptrap created\n";
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout<<"Claptrap copy requested\n";
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout<<"Claptrap backup requested\n";
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return *this;
}

void	ClapTrap::setHitPoints(int h)
{
	hitPoints = h;
}


void	ClapTrap::setEnergyPoints(int e)
{
	energyPoints = e;
}

void	ClapTrap::setAttackDamage(int d)
{
	attackDamage = d;
}

int		ClapTrap::getHitPoints() const
{
	return hitPoints;
}

int		ClapTrap::getEnergyPoints() const
{
	return energyPoints;
}

int		ClapTrap::getAttackDamage() const
{
	return attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (getEnergyPoints() != 0)
	{
		std::cout<<"attacks "<< target <<", causing "<< getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout<<"ClapTrap is too tired for that\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap hit a wall and took "<<amount<<" damage\n";
	setHitPoints(getHitPoints() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"ClapTrap found some parts and healed "<<amount<<" hp\n";
		setHitPoints(getHitPoints() + amount);
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout<<"ClapTrap is too tired for that\n";
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Claptrap fell off the stairs\n";
}
