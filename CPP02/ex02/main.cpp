/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:46:50 by msisto            #+#    #+#             */
/*   Updated: 2025/09/24 11:39:08 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	main(void)
{
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b * a << std::endl;
	std::cout << b / a << std::endl;
	std::cout << b + a << std::endl;
	std::cout << b - a << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max_eq(a, b) << std::endl;
	std::cout << Fixed::min_eq(a, b) << std::endl;
	std::cout << Fixed::equal(a, b) << std::endl;
	std::cout << Fixed::different(a, b) << std::endl;

	return 0;
}
