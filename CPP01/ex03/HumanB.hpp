/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:37 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 11:17:22 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
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

#endif
