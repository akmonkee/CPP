/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:52:48 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 13:16:35 by msisto           ###   ########.fr       */
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
