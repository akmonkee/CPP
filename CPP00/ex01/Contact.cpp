/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:12 by msisto            #+#    #+#             */
/*   Updated: 2025/06/07 17:04:33 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	;
}

std::string	Contact::GetFName()
{
	return this->fName;
}

std::string	Contact::GetLName()
{
	return this->lName;
}

std::string	Contact::GetNickname()
{
	return this->nickname;
}

std::string	Contact::GetPhoneNumber()
{
	return this->phoneNumber;
}

std::string	Contact::GetDarkestSecret()
{
	return this->darkestSecret;
}

void	Contact::SetFName(std::string newValue)
{
	this->fName = newValue;
}

void	Contact::SetLName(std::string newValue)
{
	this->lName = newValue;
}

void	Contact::SetNickname(std::string newValue)
{
	this->nickname = newValue;
}

void	Contact::SetPhoneNumber(std::string newValue)
{
	this->phoneNumber = newValue;
}

void	Contact::SetDarkestSecret(std::string newValue)
{
	this->darkestSecret = newValue;
}
