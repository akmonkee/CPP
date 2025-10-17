/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:02 by msisto            #+#    #+#             */
/*   Updated: 2025/10/17 12:54:32 by msisto           ###   ########.fr       */
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
	std::cout<<"Animal copy constructor\n";
	this->type = obj.type;
}

Animal&	Animal::operator=(const Animal& obj)
{
	this->type = obj.type;
	return *this;
}

void	Animal::MakeSound() const
{
	;
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout<<"Animal destructor\n";
}

Cat::Cat() : Animal()
{
	std::cout<<"Cat constructor\n";
	this->type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout<<"Cat copy constructor\n";
	this->type = obj.type;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	return *this;
}

void	Cat::MakeSound() const
{
	std::cout<<"Meow\n";
}

Cat::~Cat()
{
	std::cout<<"Cat destructor\n";
}


Dog::Dog() : Animal()
{
	std::cout<<"Dog constructor\n";
	this->type = "Dog";
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout<<"Dog copy constructor\n";
	this->type = obj.type;
}

Dog&	Dog::operator=(const Dog& obj)
{
	this->type = obj.type;
	return *this;
}

void	Dog::MakeSound() const
{
	std::cout<<"Bark\n";
}

Dog::~Dog()
{
	std::cout<<"Dog destructor\n";
}
