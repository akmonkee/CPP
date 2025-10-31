/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 11:43:27 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "\033[32m" <<"Default constructor called" << "\033[0m"<<std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(int num)
{
	std::cout<< "\033[36m" <<"Int constructor called" << "\033[0m"<<std::endl;
	this->setRawBits(num << fBits);
}

Fixed::Fixed(float num)
{
	std::cout<< "\033[36m" <<"Float constructor called" << "\033[0m"<<std::endl;
	setRawBits(roundf(num * (1 << fBits)));
}

Fixed::Fixed(const Fixed& val)
{
	std::cout<< "\033[33m" <<"Copy constructor called" << "\033[0m"<<std::endl;
	this->setRawBits(val.getRawBits());
}
Fixed&	Fixed::operator=(const Fixed& val)
{
	std::cout<< "\033[34m" <<"Copy assignment operator called" << "\033[0m"<<std::endl;
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
	std::cout<<"getRawBits member function called" << "\033[0m"<<std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called" << "\033[0m"<<std::endl;
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
	std::cout<< "\033[31m" <<"Destructor called" << "\033[0m"<<std::endl;
}
