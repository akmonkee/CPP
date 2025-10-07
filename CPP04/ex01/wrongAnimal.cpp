/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:55:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/06 12:11:30 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	this->type = obj.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	this->type = obj.type;
	return *this;
}

void	WrongAnimal::MakeSound() const
{
	std::cout<<"Bark\n";
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	;
}

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	this->type = obj.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	return *this;
}

WrongCat::~WrongCat()
{
	;
}
