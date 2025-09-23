/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/09/23 14:00:38 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(int num)
{
	this->setRawBits(num << fBits);
}

Fixed::Fixed(float num)
{
	this->setRawBits(roundf(num * (1 << fBits)));
}

Fixed::Fixed(const Fixed& val)
{
	this->setRawBits(val.getRawBits());
}

Fixed&	Fixed::operator=(const Fixed& val)
{
	this->setRawBits(val.getRawBits());
	return *this;
}

Fixed	Fixed::operator*(const Fixed& val) const
{
	return Fixed(this->toFloat() * val.toFloat());
}

Fixed&	Fixed::operator++()
{
	value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	value++;
	return temp;
}

Fixed&	Fixed::operator--()
{
	value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	value--;
	return temp;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os<<obj.toFloat();
	return os;
}

int	Fixed::getRawBits() const
{
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	std::cout<<"max: ";
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	std::cout<<"max: ";
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	std::cout<<"min: ";
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	std::cout<<"min: ";
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called\n";
}
