/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:08:52 by msisto            #+#    #+#             */
/*   Updated: 2025/06/12 12:30:22 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout<< "no zombies"<<std::endl;
		return NULL;
	}
	Zombie *horde = new Zombie[N];
	for(int i = 0; i <= N; i++)
		new(&horde[i]) Zombie(name);
	return (horde);
}
