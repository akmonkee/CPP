/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:26 by msisto            #+#    #+#             */
/*   Updated: 2025/10/31 11:26:25 by msisto           ###   ########.fr       */
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
	this->setRawBits(roundf(num * (1 << fBits)));
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

Fixed	Fixed::operator*(const Fixed& val) const
{
	std::cout<<this->toFloat()<<" * "<<val.toFloat()<<" = ";
	return Fixed(this->toFloat() * val.toFloat());
}

Fixed	Fixed::operator/(const Fixed& val) const
{
	std::cout<<this->toFloat()<<" / "<<val.toFloat()<<" = ";
	return Fixed(this->toFloat() / val.toFloat());
}

Fixed	Fixed::operator+(const Fixed& val) const
{
	std::cout<<this->toFloat()<<" + "<<val.toFloat()<<" = ";
	return Fixed(this->toFloat() + val.toFloat());
}

Fixed	Fixed::operator-(const Fixed& val) const
{
	std::cout<<this->toFloat()<<" - "<<val.toFloat()<<" = ";
	return Fixed(this->toFloat() - val.toFloat());
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

bool	Fixed::max_eq(Fixed& a, Fixed& b)
{
	std::cout<<a.toFloat()<<" >= "<<b.toFloat()<<" : ";
	if (a.getRawBits() >= b.getRawBits())
		return true;
	return false;
}

bool	Fixed::max_eq(const Fixed& a, const Fixed& b)
{
	std::cout<<a.toFloat()<<" >= "<<b.toFloat()<<" : ";
	if (a.getRawBits() >= b.getRawBits())
		return true;
	return false;
}

bool	Fixed::min_eq(const Fixed& a, const Fixed& b)
{
	std::cout<<a.toFloat()<<" <= "<<b.toFloat()<<" : ";
	if (a.getRawBits() <= b.getRawBits())
		return true;
	return false;
}

bool	Fixed::equal(Fixed& a, Fixed& b)
{
	std::cout<<a.toFloat()<<" == "<<b.toFloat()<<" : ";
	if (a.getRawBits() == b.getRawBits())
		return true;
	return false;
}

bool	Fixed::equal(const Fixed& a, const Fixed& b)
{
	std::cout<<a.toFloat()<<" == "<<b.toFloat()<<" : ";
	if (a.getRawBits() == b.getRawBits())
		return true;
	return false;
}

bool	Fixed::different(Fixed& a, Fixed& b)
{
	std::cout<<a.toFloat()<<" ! "<<b.toFloat()<<" : ";
	if (a.getRawBits() != b.getRawBits())
		return true;
	return false;
}

bool	Fixed::different(const Fixed& a, const Fixed& b)
{
	std::cout<<a.toFloat()<<" != "<<b.toFloat()<<" : ";
	if (a.getRawBits() != b.getRawBits())
		return true;
	return false;
}

Fixed::~Fixed()
{
	std::cout<< "\033[31m" <<"Destructor called" << "\033[0m"<<std::endl;
}
