/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:00 by msisto            #+#    #+#             */
/*   Updated: 2025/10/28 14:54:27 by msisto           ###   ########.fr       */
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
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout<< "invalid index"<<std::endl;
		return ;
	}
	if (index >= 0 && index <= this->cNbr)
		this->display(index);
	else
		std::cout<< "invalid index"<<std::endl;
}

int	PhoneBook::add()
{
	std::string	fname;
	std::string	lname;
	std::string	nickname;
	std::string	phonenbr;
	std::string	secret;
	std::string	lines[5] = {"input first name: ", "input last name: ", "input nickname: ", "input phone number: ", "input darkest secret: "};

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Contact " << this->cNbr << "\n" << std::endl;
		std::cout<< lines[i];
		if (i == 0)
			std::cin >> fname;
		else if (i == 1)
			std::cin >> lname;
		else if (i == 2)
			std::cin >> nickname;
		else if (i == 3)
		{
			std::cin >> phonenbr;
			if (phonenbr.size() != 10)
			{
				std::cout<<"invalid input length\n";
				return 1;
			}
			if (phonecheck(phonenbr))
			{
				std::cout<<"not a phone number\n";
				return 1;
			}
		}
		else if (i == 4)
			std::cin >> secret;
	}
	this->contacts[cNbr].SetFName(fname);
	this->contacts[cNbr].SetLName(lname);
	this->contacts[cNbr].SetNickname(nickname);
	this->contacts[cNbr].SetPhoneNumber(phonenbr);
	this->contacts[cNbr].SetDarkestSecret(secret);
	if (this->cNbr < 7)
		this->cNbr++;
	else
	{
		this->cNbr = 0;
		this->isFull = true;
	}
	return (0);
}

int	phonecheck(std::string input)
{
	int i = 0;
	while (i < 10)
	{
		if (input[i] > 57 || input[i] < 48)
			return 1;
		i++;
	}
	return 0;
}
