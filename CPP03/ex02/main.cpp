/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/09/26 14:12:09 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("Scrap");
	ScavTrap b = ScavTrap("Chunk");
	FragTrap c = FragTrap("Frag");
	b.guardGate();
	c.highFivesGuys();
	a.attack("wall");
	b.attack("wall");
	c.attack("wall");
}
