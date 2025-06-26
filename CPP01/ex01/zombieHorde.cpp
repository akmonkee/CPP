/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:29:37 by msisto            #+#    #+#             */
/*   Updated: 2025/06/26 18:45:44 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string Name)
{
	Zombie *zombieArray;
	zombieArray = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombieArray[i].setName(Name);
	return (zombieArray);
}
