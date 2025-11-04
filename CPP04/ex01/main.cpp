/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:52:48 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 12:11:17 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* k = new Cat();

	delete j;
	delete k;

	std::cout<<"----------------------------\n";

	int	i = 0;
	Animal* Animals[] = {new Dog, new Cat, new Dog, new Cat, new Dog, new Cat};

	std::cout<<"----------------------------\n";

	while (i != 6)
	{
		Animals[i]->MakeSound();
		i++;
	}

	std::cout<<"----------------------------\n";

	i = 0;

	while (i != 6)
	{
		delete Animals[i];
		i++;
	}

	return 0;
}
