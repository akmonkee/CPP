/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:37 by msisto            #+#    #+#             */
/*   Updated: 2025/09/05 10:54:31 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon	*type;
	public:
		HumanB(const std::string& name);
		void	setWeapon(Weapon& wep);
		void	attack();
		~HumanB();
};
