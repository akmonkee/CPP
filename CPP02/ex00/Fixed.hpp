/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:01 by msisto            #+#    #+#             */
/*   Updated: 2025/09/17 14:24:46 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	private:
		int	value;
		static const int	fBits;
	public:
		Fixed();
		Fixed(const Fixed& val);
		Fixed& operator=(const Fixed& val);
		int getRawBits() const;
		~Fixed();
};
