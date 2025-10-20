/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:08 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 13:35:56 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H
#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string type;
		Brain* B;
	public:
		Animal();
		Animal(const Animal& obj);
		Animal&	operator=(const Animal& obj);
		std::string	getType() const;
		virtual void	MakeSound() const = 0;
		virtual ~Animal();
};

#endif

