/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:10 by msisto            #+#    #+#             */
/*   Updated: 2025/06/07 21:28:16 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	Contact
{
private:
	std::string fName;
	std::string lName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	std::string	GetFName();
	std::string	GetLName();
	std::string	GetNickname();
	std::string	GetPhoneNumber();
	std::string	GetDarkestSecret();
	void		SetFName(std::string newValue);
	void		SetLName(std::string newValue);
	void		SetNickname(std::string newValue);
	void		SetPhoneNumber(std::string newValue);
	void		SetDarkestSecret(std::string newValue);
};

#endif
