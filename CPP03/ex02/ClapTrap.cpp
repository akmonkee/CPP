/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:27 by msisto            #+#    #+#             */
/*   Updated: 2025/09/26 14:10:14 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Claptrap created\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout<<"Claptrap copy requested\n";
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout<<"Claptrap backup requested\n";
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"ClapTrap "<<this->name<<" attacks "<< target <<", causing "<< this->attackDamage << " points of damage!\n";
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

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"Scavtrap created\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout<<"ScavTrap copy requested\n";
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"ScavTrap "<<this->name<<" swiftly attacks "<< target <<", causing an impressive "<< this->attackDamage << " points of damage!\n";
		this->energyPoints--;
	}
	else
		std::cout<<"ScavTrap is too tired for that\n";
}

void	ScavTrap::guardGate()
{
	std::cout<<this->name<<" is guarding a gate, no one will get past him\n";
}

ScavTrap::~ScavTrap()
{
	std::cout<<"Scavtrap fell off the stairs, he might be better but he has the same weakness\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap created\n";
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout<<"FragTrap copy requested\n";
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energyPoints != 0)
	{
		std::cout<<"FragTrap "<<this->name<<" lands an explosive attack on "<< target <<", causing a devastating "<< this->attackDamage << " points of damage!\n";
		this->energyPoints--;
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
