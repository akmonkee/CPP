/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:02 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:19:21 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout<< "\033[32m" << "Animal constructor\n" << "\033[0m";
	this->type = "Animal";
}

Animal::Animal(const Animal& obj)
{
	std::cout<< "\033[33m" << "Animal copy constructor\n" << "\033[0m";
	this->type = obj.type;
}

Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout<< "\033[31m" << "Animal destructor\n" << "\033[0m";
}
