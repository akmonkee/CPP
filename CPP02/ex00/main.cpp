/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:46:50 by msisto            #+#    #+#             */
/*   Updated: 2025/09/17 14:39:41 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout<<a.getRawBits()<<std::endl;
	std::cout<<b.getRawBits()<<std::endl;
	std::cout<<c.getRawBits()<<std::endl;

	return (0);
}
