/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:38:00 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 12:52:06 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout<<"Cat constructor\n";
	this->type = "Cat";
	this->B = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	this->type = obj.type;
}

Cat&	Cat::operator=(const Cat& obj)
{
	this->type = obj.type;
	this->B = new Brain(*obj.B);
	return *this;
}

void	Cat::MakeSound() const
{
	std::cout<<"Meow\n";
}

Cat::~Cat()
{
	std::cout<<"Cat destructor\n";
	delete this->B;
}
