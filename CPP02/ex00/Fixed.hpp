/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:49:01 by msisto            #+#    #+#             */
/*   Updated: 2025/10/23 12:19:10 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	private:
		int	value;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& val);
		Fixed& operator=(const Fixed& val);
		int getRawBits() const;
		void setRawBits(int const raw);
		~Fixed();
};
