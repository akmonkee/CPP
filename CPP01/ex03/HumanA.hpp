/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:16 by msisto            #+#    #+#             */
/*   Updated: 2025/10/30 11:17:24 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon	&type;
	public:
		HumanA(const std::string& name, Weapon& wep);
		void	attack();
		~HumanA();
};

#endif
