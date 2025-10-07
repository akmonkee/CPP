/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:53:08 by msisto            #+#    #+#             */
/*   Updated: 2025/10/07 13:03:47 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		void	MakeSound() const;
		~Animal();
};

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& obj);
		Cat&	operator=(const Cat& obj);
		~Cat();
};

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& obj);
		Dog&	operator=(const Dog& obj);
		~Dog();
};

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal&	operator=(const WrongAnimal& obj);
		std::string	getType() const;
		void	MakeSound() const;
		~WrongAnimal();
};

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		WrongCat&	operator=(const WrongCat& obj);
		~WrongCat();
};
