/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:01 by msisto            #+#    #+#             */
/*   Updated: 2025/09/18 11:33:12 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	private:
		int	value;
		int	intValue;
		float	floatValue;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed& FixedInt();
		Fixed& FixedFloat();
		Fixed(const Fixed& val);
		Fixed& operator=(const Fixed& val);
		int getRawBits() const;
		void setRawBits(int const raw);
		//int toInt( void ) const;
		//float toFloat( void ) const;
		~Fixed();
};
