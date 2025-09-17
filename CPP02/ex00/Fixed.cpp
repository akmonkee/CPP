/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/09/17 14:39:26 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed& val)
{
	std::cout<<"Copy constructor called\n";
	this->value=val.value;
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

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}
