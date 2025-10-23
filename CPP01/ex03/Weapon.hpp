/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:34:55 by msisto            #+#    #+#             */
/*   Updated: 2025/10/23 12:19:04 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(const std::string& type);
		std::string getType() const;
		void setType(const std::string& type);
		~Weapon();
};
