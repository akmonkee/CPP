/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:59:04 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 14:31:25 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<< "\033[32m" <<"Scavtrap created\n" << "\033[0m";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout<< "\033[33m" <<"ScavTrap copy requested\n" << "\033[0m";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout<< "\033[34m" <<"ScavTrap backup requested\n";
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
	std::cout<< "\033[36m" <<getName()<<" is guarding a gate, no one will get past him\n" << "\033[0m";
}

ScavTrap::~ScavTrap()
{
	std::cout<< "\033[31m" <<"Scavtrap fell off the stairs, he might be better but he has the same weakness\n" << "\033[0m";
}
