/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:46:35 by msisto            #+#    #+#             */
/*   Updated: 2025/09/17 13:21:21 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"harl.hpp"

harl::harl()
{
	;
}

void	harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now.\n";
}

void	harl::complain(std::string level)
{
	typedef void (harl::*FuncPtr)();

	const FuncPtr table[4] = {
		&harl::debug,
		&harl::info,
		&harl::warning,
		&harl::error
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

harl::~harl()
{
	;
}
