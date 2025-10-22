/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:46:31 by msisto            #+#    #+#             */
/*   Updated: 2025/10/22 13:54:44 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<iostream>

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		void	complain(std::string level);
		Harl();
		~Harl();
};

