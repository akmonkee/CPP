/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:54:32 by msisto            #+#    #+#             */
/*   Updated: 2025/06/11 13:22:07 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie firstname("Zombus");
	Zombie* newZombus = newZombie("Zombus II");
	firstname.announce();
	newZombus->announce();
	randomCump("Zambus");

	delete newZombus;
}
