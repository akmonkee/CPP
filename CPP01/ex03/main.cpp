/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:32:53 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 11:50:56 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
	{
		Weapon club = Weapon("hammer meant for bonking");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("normal hammer");
		bob.attack();
	}
	{
		Weapon club = Weapon("hammer meant for bonking");
		Weapon sword = Weapon("sharp metal stick");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		jim.setWeapon(sword);
		jim.attack();
	}
	return 0;
}
