/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:46:31 by msisto            #+#    #+#             */
/*   Updated: 2025/09/17 13:19:29 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<iostream>

class	harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		void	complain(std::string level);
		harl();
		~harl();
};

