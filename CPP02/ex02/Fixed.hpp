/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:01 by msisto            #+#    #+#             */
/*   Updated: 2025/09/23 13:50:20 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int		value;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed& val);
		Fixed& operator=(const Fixed& val);
		Fixed operator*(const Fixed& val) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt( void ) const;
		float toFloat( void ) const;
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
		static Fixed&	min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		~Fixed();
};
