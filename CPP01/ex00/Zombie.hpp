/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:54:39 by msisto            #+#    #+#             */
/*   Updated: 2025/06/11 13:21:26 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string zName);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void	randomCump(std::string name);

#endif

