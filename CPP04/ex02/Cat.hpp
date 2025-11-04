/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:37:38 by msisto            #+#    #+#             */
/*   Updated: 2025/11/04 11:54:19 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain* B;
	public:
		Cat();
		Cat(const Cat& obj);
		Cat&	operator=(const Cat& obj);
		void	MakeSound() const;
		virtual ~Cat();
};

#endif

