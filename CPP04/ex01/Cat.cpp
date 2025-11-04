/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:38:00 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 11:49:55 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout<< "\033[32m" << "Cat constructor\n" << "\033[0m";
	this->type = "Cat";
	this->B = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout<< "\033[33m" << "Cat copy constructor\n" << "\033[0m";
	this->type = obj.type;
	this->B = new Brain(*obj.B);
}

Cat&	Cat::operator=(const Cat& obj)
{
	std::cout<< "\033[34m" << "Cat = operator\n" << "\033[0m";
	this->type = obj.type;
	this->B = new Brain(*obj.B);
	return *this;
}

void	Cat::MakeSound() const
{
	std::cout<< "\033[36m" << "Meow\n" << "\033[0m";
}

Cat::~Cat()
{
	std::cout<< "\033[31m" << "Cat destructor\n" << "\033[0m";
	delete this->B;
}
