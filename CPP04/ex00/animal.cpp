/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:02 by msisto            #+#    #+#             */
/*   Updated: 2025/09/30 13:39:56 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
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

void	Animal::MakeSound() const
{
	if (type == "Cat")
		std::cout<<"Meow\n";
	else if (type == "Dog")
		std::cout<<"Bark\n";
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	;
}

Cat::Cat() : Animal()
{
	this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	this->type = obj.type;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	return *this;
}

Cat::~Cat()
{
	;
}


Dog::Dog() : Animal()
{
	this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	this->type = obj.type;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	return *this;
}

Dog::~Dog()
{
	;
}
