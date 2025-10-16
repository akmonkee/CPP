/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:27 by msisto            #+#    #+#             */
/*   Updated: 2025/10/16 13:34:01 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Claptrap created\n";
	setName(name);
	setHitPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout<<"Claptrap copy requested\n";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout<<"Claptrap backup requested\n";
	setName(obj.getName());
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

void	ClapTrap::setName(std::string name)
{
	this->name = name;
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

std::string ClapTrap::getName() const
{
	return name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"ClapTrap "<<getName()<<" attacks "<< target <<", causing "<< getAttackDamage() << " points of damage!\n";
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
	if (getEnergyPoints() != 0)
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"Scavtrap created\n";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout<<"ScavTrap copy requested\n";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout<<"ScavTrap backup requested\n";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (getEnergyPoints() != 0)
	{
		std::cout<<"ScavTrap "<<getName()<<" swiftly attacks "<< target <<", causing an impressive "<< getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout<<"ScavTrap is too tired for that\n";
}

void	ScavTrap::guardGate()
{
	std::cout<<getName()<<" is guarding a gate, no one will get past him\n";
}

ScavTrap::~ScavTrap()
{
	std::cout<<"Scavtrap fell off the stairs, he might be better but he has the same weakness\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap created\n";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout<<"FragTrap copy requested\n";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	std::cout<<"FragTrap backup requested\n";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (getEnergyPoints() != 0)
	{
		std::cout<<"FragTrap "<<getName()<<" lands an explosive attack on "<< target <<", causing a devastating "<< getAttackDamage() << " points of damage!\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else
		std::cout<<"FragTrap is too tired for that\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout<<"give me a high five!\n";
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap fell off the stairs, no claptrap can overcome the might of the stairs\n";
}
