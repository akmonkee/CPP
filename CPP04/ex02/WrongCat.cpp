/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:13:45 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:26:33 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout<< "\033[32m" << "WrongCat constructor\n" << "\033[0m";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout<< "\033[33m" << "WrongCat copy constructor\n" << "\033[0m";
	this->type = obj.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	std::cout<< "\033[34m" << "WrongCat = operator\n" << "\033[0m";
	this->type = obj.type;
	return *this;
}

void	WrongCat::MakeSound() const
{
	std::cout<< "\033[36m" << "Bark\n" << "\033[0m";
}

WrongCat::~WrongCat()
{
	std::cout<< "\033[31m" << "WrongCat destructor\n" << "\033[0m";
}

