/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:24 by msisto            #+#    #+#             */
/*   Updated: 2025/09/26 13:56:30 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();
};

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		void	attack(const std::string& target);
		void	guardGate();
		~ScavTrap();
};

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		void	attack(const std::string& target);
		void	highFivesGuys();
		~FragTrap();
};

