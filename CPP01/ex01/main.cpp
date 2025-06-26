/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:54:32 by msisto            #+#    #+#             */
/*   Updated: 2025/06/26 18:46:09 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *ZombieHorde = zombieHorde(3, "Zombus");
	for(int	i = 0; i < 3; i++)
		ZombieHorde[i].announce();
	delete[] ZombieHorde;
}
