/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:18:44 by msisto            #+#    #+#             */
/*   Updated: 2025/10/22 13:57:36 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<iostream>
#include	<fstream>

class	MySed
{
	private:
		std::string	fileName;
		std::string	s1;
		std::string	s2;
		std::ifstream	infile;
		std::ofstream	outfile;
	public:
		MySed();
		bool	infileCheck();
		bool	outfileCheck();
		int	firstWChar(std::string line, int last_s);
		int		nextIcr(std::string line, int next_s, int type);
		void	fileProc();
		~MySed();
};
