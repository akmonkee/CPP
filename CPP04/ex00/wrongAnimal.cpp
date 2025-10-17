/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:55:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/17 12:55:54 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal constructor\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout<<"WrongAnimal copy constructor\n";
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
	std::cout<<"WrongAnimal destructor\n";
}

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout<<"WrongCat constructor\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout<<"WrongCat copy constructor\n";
	this->type = obj.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	this->type = obj.type;
	return *this;
}

void	WrongCat::MakeSound() const
{
	std::cout<<"Bark\n";
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor\n";
}
