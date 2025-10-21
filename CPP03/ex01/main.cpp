/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/10/21 14:43:42 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a = ClapTrap("Scrap");
	ScavTrap b = ScavTrap("Chunk");
	b.guardGate();
	a.attack("Chunk");
	a.takeDamage(5);
}
