/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 14:35:01 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("Scrap");
	ScavTrap b = ScavTrap("Chunk");
	FragTrap c = FragTrap("Frag");
	b.guardGate();
	c.highFivesGuys();

	std::cout<<"\nClaptrap a:\nhp: "<< a.getHitPoints() <<"\nep: "<< a.getEnergyPoints()<<"\natk: "<< a.getAttackDamage()<<"\n";
	std::cout<<"\nClaptrap b:\nhp: "<< b.getHitPoints() <<"\nep: "<< b.getEnergyPoints()<<"\natk: "<< b.getAttackDamage()<<"\n";
	std::cout<<"\nClaptrap c:\nhp: "<< c.getHitPoints() <<"\nep: "<< c.getEnergyPoints()<<"\natk: "<< c.getAttackDamage()<<"\n\n";

	a.attack("wall");
	b.attack("wall");
	c.attack("wall");
}
