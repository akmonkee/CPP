/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:39:36 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:25:00 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout<< "\033[32m" << "Dog constructor\n" << "\033[0m";
	this->type = "Dog";
	this->B = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout<< "\033[33m" << "Dog copy constructor\n" << "\033[0m";
	this->type = obj.type;
}

Dog&	Dog::operator=(const Dog& obj)
{
	std::cout<< "\033[34m" << "Dog = operator\n" << "\033[0m";
	this->type = obj.type;
	this->B = new Brain(*obj.B);
	return *this;
}

void	Dog::MakeSound() const
{
	std::cout<< "\033[36m" << "Bark\n" << "\033[0m";
}

Dog::~Dog()
{
	std::cout<< "\033[31m" << "Dog destructor\n" << "\033[0m";
	delete this->B;
}
