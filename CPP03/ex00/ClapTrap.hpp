/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:24 by msisto            #+#    #+#             */
/*   Updated: 2025/09/24 12:21:20 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	ClapTrap
{
	private:
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
};
