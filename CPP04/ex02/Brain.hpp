/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:01:54 by msisto            #+#    #+#             */
/*   Updated: 2025/10/20 12:43:08 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>

class	Brain
{
	private:
		std::string *Ideas;
	public:
		Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		std::string *getIdeas() const;
		void	setIdeas(const std::string *I);
		~Brain();
};

#endif
