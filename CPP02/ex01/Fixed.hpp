/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/23 12:30:28 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
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
		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt( void ) const;
		float toFloat( void ) const;
		~Fixed();
	};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
