/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:02 by msisto            #+#    #+#             */
/*   Updated: 2025/10/07 13:48:03 by msisto           ###   ########.fr       */
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
	if (this->getType() == "Cat")
		std::cout<<"Meow\n";
	else if (this->getType() == "Dog")
		std::cout<<"Bark\n";
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	delete B;
}

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->B = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	this->type = obj.type;
	this->B = obj.B;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	this->B = obj.B;
	return *this;
}

Cat::~Cat()
{
	;
}


Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->B = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	this->type = obj.type;
	this->B = obj.B;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	this->B = obj.B;
	return *this;
}

Dog::~Dog()
{
	;
}
