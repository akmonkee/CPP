/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:52:48 by msisto            #+#    #+#             */
/*   Updated: 2025/10/17 12:57:06 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	Animal cp = Animal();
	Animal cp2 = cp;
	Animal cp3 = Animal(cp2);

	std::cout<<"---------------------------------------\n";
	const Animal* j = new Dog();
	Dog d1 = Dog();
	Dog d2 = d1;
	Dog d3 = Dog(d2);

	std::cout<<"---------------------------------------\n";
	const Animal* i = new Cat();
	Cat c1 = Cat();
	Cat c2 = c1;
	Cat c3 = Cat(c2);

	std::cout<<"---------------------------------------\n";
	const WrongAnimal* k = new WrongCat();
	WrongCat w1 = WrongCat();
	WrongCat w2 = w1;
	WrongCat w3 = WrongCat(w2);

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
	std::cout<<"---------------------------------------\n";

	return 0;
}
