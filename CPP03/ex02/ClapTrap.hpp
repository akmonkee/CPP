/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:55:24 by msisto            #+#    #+#             */
/*   Updated: 2025/10/16 13:34:36 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
				void	setHitPoints(int h);
		void	setEnergyPoints(int e);
		void	setAttackDamage(int d);
		void	setName(std::string name);
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		std::string	getName() const;
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
		ScavTrap&	operator=(const ScavTrap& obj);
		void	attack(const std::string& target);
		void	guardGate();
		~ScavTrap();
};

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap&	operator=(const FragTrap& obj);
		void	attack(const std::string& target);
		void	highFivesGuys();
		~FragTrap();
};

