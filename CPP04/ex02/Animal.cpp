/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:02 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 13:35:50 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
	std::cout<<"Animal constructor\n";
	this->type = "Animal";
}

Animal::Animal(const Animal& obj)
{
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
	std::cout<<"Animal destructor\n";
}
