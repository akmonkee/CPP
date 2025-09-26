/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:04 by msisto            #+#    #+#             */
/*   Updated: 2025/09/25 11:36:53 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a;
	ClapTrap b;

	std::cout<<"ClapTrap a ";
	a.attack("b");
	b.takeDamage(0);
	b.beRepaired(1);
}
