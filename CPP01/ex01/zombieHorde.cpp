/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:12:35 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 11:13:13 by msisto           ###   ########.fr       */
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
