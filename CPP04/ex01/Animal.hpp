/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:08 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 11:48:23 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);
		std::string	getType() const;
		virtual void	MakeSound() const;
		virtual ~Animal();
};

#endif

