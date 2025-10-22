/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:46:35 by msisto            #+#    #+#             */
/*   Updated: 2025/10/22 13:55:02 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Harl.hpp"

Harl::Harl()
{
	;
}

void	Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*FuncPtr)();

	const FuncPtr table[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string lvls[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	int	i = 0;
	while (i < 4)
	{
		if (level == lvls[i])
		{
			(this->*table[i])();
		}
		i++;
	}
}

Harl::~Harl()
{
	;
}
