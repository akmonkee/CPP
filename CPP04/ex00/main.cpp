/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:52:48 by msisto            #+#    #+#             */
/*   Updated: 2025/10/17 12:25:26 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	std::cout<<"---------------------------------------\n";
	const Animal* j = new Dog();
	std::cout<<"---------------------------------------\n";
	const Animal* i = new Cat();
	std::cout<<"---------------------------------------\n";
	const WrongAnimal* k = new WrongCat();

	std::cout<<"---------------------------------------\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout<<"---------------------------------------\n";

	i->MakeSound();
	j->MakeSound();
	k->MakeSound();
	meta->MakeSound();
	std::cout<<"---------------------------------------\n";

	delete i;
	delete j;
	delete k;
	delete meta;

	return 0;
}
