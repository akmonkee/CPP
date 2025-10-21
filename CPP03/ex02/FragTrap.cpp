/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:59:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/21 15:01:37 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
