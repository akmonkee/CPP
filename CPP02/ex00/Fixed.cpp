/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 10:52:06 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<< "\033[32m" <<"Default constructor called" << "\033[0m"<<std::endl;
	this->setRawBits(0);
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

int	Fixed::getRawBits() const
{
	std::cout<< "\033[37m" <<"getRawBits member function called" << "\033[0m"<<std::endl;
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<< "\033[37m" <<"setRawBits member function called" << "\033[0m"<<std::endl;
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout<< "\033[31m" <<"Destructor called" << "\033[0m"<<std::endl;
}
