/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:09:20 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 11:49:17 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain* B;
	public:
		Dog();
		Dog(const Dog& obj);
		Dog&	operator=(const Dog& obj);
		void	MakeSound() const;
		virtual ~Dog();
};

#endif
