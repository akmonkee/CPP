/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:52:48 by msisto            #+#    #+#             */
/*   Updated: 2025/11/03 12:52:58 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();

	std::cout<<"---------------------------------------\n";
	const Animal* dog = new Dog();

	std::cout<<"---------------------------------------\n";
	const Animal* cat = new Cat();

	std::cout<<"---------------------------------------\n";
	const WrongAnimal* wrong = new WrongCat();

	std::cout<<"---------------------------------------\n";
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	std::cout<<"---------------------------------------\n";

	meta->MakeSound();
	dog->MakeSound();
	cat->MakeSound();
	wrong->MakeSound();
	std::cout<<"---------------------------------------\n";

	delete meta;
	delete dog;
	delete cat;
	delete wrong;

	return 0;
}
