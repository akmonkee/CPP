/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/09/23 14:09:11 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	this->setRawBits(0);
}

Fixed::Fixed(int num)
{
	std::cout<<"Int constructor called\n";
	this->setRawBits(num << fBits);
}

Fixed::Fixed(float num)
{
	std::cout<<"Float constructor called\n";
	setRawBits(roundf(num * (1 << fBits)));
}

Fixed::Fixed(const Fixed& val)
{
	std::cout<<"Copy constructor called\n";
	this->setRawBits(val.getRawBits());
}

Fixed&	Fixed::operator=(const Fixed& val)
{
	std::cout<<"Copy assignment operator called\n";
	this->setRawBits(val.getRawBits());
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os<<obj.toFloat();
	return os;
}

int	Fixed::getRawBits() const
{
	std::cout<<"getRawBits member function called\n";
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called\n";
	this->value = raw;
}

int	Fixed::toInt( void ) const
{
	return static_cast<int>(this->value) / (1 << fBits);
}
float	Fixed::toFloat( void ) const
{
	return static_cast<float>(this->value) / (1 << fBits);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}
