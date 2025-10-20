/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:39:36 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 13:26:04 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout<<"Dog constructor\n";
	this->type = "Dog";
	this->B = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	this->type = obj.type;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	this->B = new Brain(*obj.B);
	return *this;
}

void	Dog::MakeSound() const
{
	std::cout<<"Bark\n";
}

Dog::~Dog()
{
	std::cout<<"Dog destructor\n";
	delete this->B;
}
