/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:20:21 by msisto            #+#    #+#             */
/*   Updated: 2025/10/28 12:51:26 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		cNbr;
	bool	isFull;
public:
	PhoneBook();
	int	add();
	void	display(int nbr);
	void	search();
};

int	phonecheck(std::string input);

#endif
