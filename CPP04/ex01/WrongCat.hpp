/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:14:10 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 11:55:58 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:
		Brain* B;
	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		WrongCat&	operator=(const WrongCat& obj);
		void	MakeSound() const;
		virtual ~WrongCat();
};

#endif
