/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/09/18 11:32:16 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	this->value = 0;
}

Fixed& Fixed::FixedInt(int num)
{
	std::cout<<"Int constructor called\n";
	this->valueInt = num;
	return *this;
}

Fixed& Fixed::FixedFloat(int num)
{
	std::cout<<"Float constructor called\n";
	this->valueFloat = num;
	return *this;
}

Fixed::Fixed(const Fixed& val)
{
	std::cout<<"Copy constructor called\n";
	this->value= val.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& val)
{
	std::cout<<"Copy assignment operator called\n";
	this->value = val.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout<<"getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called\n";
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}
