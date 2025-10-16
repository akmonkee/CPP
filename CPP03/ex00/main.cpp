/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/10/16 12:08:33 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a;
	ClapTrap b;

	std::cout<<"Claptrap a:\nhp: "<< a.getHitPoints() <<"\nep: "<< a.getEnergyPoints()<<"\natk: "<< a.getAttackDamage()<<"\n";
	std::cout<<"Claptrap b:\nhp: "<< b.getHitPoints() <<"\nep: "<< b.getEnergyPoints()<<"\natk: "<< b.getAttackDamage()<<"\n";

	std::cout<<"Claptrap a ";
	a.attack("b");
	b.takeDamage(0);
	b.beRepaired(1);

	std::cout<<"Claptrap a:\nhp: "<< a.getHitPoints() <<"\nep: "<< a.getEnergyPoints()<<"\natk: "<< a.getAttackDamage()<<"\n";
	std::cout<<"Claptrap b:\nhp: "<< b.getHitPoints() <<"\nep: "<< b.getEnergyPoints()<<"\natk: "<< b.getAttackDamage()<<"\n";
}
