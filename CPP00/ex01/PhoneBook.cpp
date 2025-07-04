/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:00 by msisto            #+#    #+#             */
/*   Updated: 2025/06/10 12:02:28 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->cNbr = 0;
	this->isFull = false;
}

void	PhoneBook::display(int nbr)
{
	std::cout<< this->contacts[nbr].GetFName()<<std::endl;
	std::cout<< this->contacts[nbr].GetLName()<<std::endl;
	std::cout<< this->contacts[nbr].GetNickname()<<std::endl;
	std::cout<< this->contacts[nbr].GetPhoneNumber()<<std::endl;
	std::cout<< this->contacts[nbr].GetDarkestSecret()<<std::endl;
}

void	print_cell(std::string cell)
{
	if (cell.size() <= 10)
		std::cout<< std::setw(10) << cell << "|";
	else
		std::cout<< cell.erase(9) << ".|";
}

void	print_header()
{
	std::cout<< "---------------------------------------------"<<std::endl;
	std::cout<< "|               CONTACT LIST                |"<<std::endl;
	std::cout<< "---------------------------------------------"<<std::endl;
}

void	PhoneBook::search()
{
	int	contactNbr;
	int	index;

	if (this->isFull == true)
		contactNbr = 8;
	else
		contactNbr = this->cNbr;
	print_header();
	for(int i = 0; i < contactNbr; i++)
	{
		std::cout<< "|";
		std::cout<< std::setw(10)<< i;
		std::cout<< "|";
		print_cell(this->contacts[i].GetFName());
		print_cell(this->contacts[i].GetLName());
		print_cell(this->contacts[i].GetNickname());
		std::cout<<std::endl;
	}
	std::cout<< "---------------------------------------------"<<std::endl;
	std::cout<< "input the index of the contact"<<std::endl;
	std::cin>> index;
	if (index >= 0 && index <= contactNbr - 1)
		this->display(index);
	else
		std::cout<< "invalid index"<<std::endl;
}

int	PhoneBook::add()
{
	std::string	input;
	std::string	lines[5] = {"input first name: ", "input last name: ", "input nickname: ", "input phone number: ", "input darkest secret: "};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Contact " << this->cNbr << "\n" << std::endl;
		std::cout<< lines[i];
		std::cin >> input;
		if (i == 0)
			this->contacts[cNbr].SetFName(input);
		else if (i == 1)
			this->contacts[cNbr].SetLName(input);
		else if (i == 2)
			this->contacts[cNbr].SetNickname(input);
		else if (i == 3)
			this->contacts[cNbr].SetPhoneNumber(input);
		else if (i == 4)
			this->contacts[cNbr].SetDarkestSecret(input);
	}
	if (this->cNbr < 7)
		this->cNbr++;
	else
	{
		this->cNbr = 0;
		this->isFull = true;
	}
	return (0);
}
