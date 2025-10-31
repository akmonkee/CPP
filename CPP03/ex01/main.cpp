/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 14:35:37 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("Scrap");
	ScavTrap b = ScavTrap("Chunk");

	std::cout<<"\nClaptrap a:\nhp: "<< a.getHitPoints() <<"\nep: "<< a.getEnergyPoints()<<"\natk: "<< a.getAttackDamage()<<"\n";
	std::cout<<"\nClaptrap b:\nhp: "<< b.getHitPoints() <<"\nep: "<< b.getEnergyPoints()<<"\natk: "<< b.getAttackDamage()<<"\n\n";

	b.guardGate();
	a.attack("Chunk");
	a.takeDamage(5);

	std::cout<<"\nClaptrap a:\nhp: "<< a.getHitPoints() <<"\nep: "<< a.getEnergyPoints()<<"\natk: "<< a.getAttackDamage()<<"\n";
	std::cout<<"\nClaptrap b:\nhp: "<< b.getHitPoints() <<"\nep: "<< b.getEnergyPoints()<<"\natk: "<< b.getAttackDamage()<<"\n\n";
}
