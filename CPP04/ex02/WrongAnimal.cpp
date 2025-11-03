/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:55:01 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:19:13 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<< "\033[32m" << "WrongAnimal constructor\n" << "\033[0m";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout<< "\033[33m" << "WrongAnimal copy constructor\n" << "\033[0m";
	this->type = obj.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	return *this;
}

void	WrongAnimal::MakeSound() const
{
	;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "\033[31m" << "WrongAnimal destructor\n" << "\033[0m";
}
