/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:54:32 by msisto            #+#    #+#             */
/*   Updated: 2025/10/22 12:35:09 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *ZombieHorde = zombieHorde(6, "Zombus");
	for(int	i = 0; i < 6; i++)
		ZombieHorde[i].announce();
	delete[] ZombieHorde;
}
