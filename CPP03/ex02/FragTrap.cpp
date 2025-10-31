/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:59:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 14:33:37 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<< "\033[32m" <<"FragTrap created\n" << "\033[0m";
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout<< "\033[33m" <<"FragTrap copy requested\n" << "\033[0m";
	setName(obj.getName());
	setHitPoints(obj.getHitPoints());
	setEnergyPoints(obj.getEnergyPoints());
	setAttackDamage(obj.getAttackDamage());
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	std::cout<< "\033[34m" <<"FragTrap backup requested\n" << "\033[0m";
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
	std::cout<< "\033[36m" <<"give me a high five!\n" << "\033[0m";
}

FragTrap::~FragTrap()
{
	std::cout<< "\033[31m" <<"FragTrap fell off the stairs, no claptrap can overcome the might of the stairs\n" << "\033[0m";
}
