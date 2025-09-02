/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:16 by msisto            #+#    #+#             */
/*   Updated: 2025/09/02 14:19:36 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon	*type;
	public:
		HumanA(const std::string& name, Weapon& wep);
		void	attack();
		~HumanA();
};
