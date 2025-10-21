/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:43:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/21 14:54:34 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
