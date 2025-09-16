/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:18:44 by msisto            #+#    #+#             */
/*   Updated: 2025/09/16 14:14:34 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma		once
#include	<iostream>
#include	<fstream>

class	mySed
{
	private:
		std::string	fileName;
		std::string	s1;
		std::string	s2;
		std::ifstream	infile;
		std::ofstream	outfile;
	public:
		mySed();
		bool	infileCheck();
		bool	outfileCheck();
		int	firstWChar(std::string line, int last_s);
		int		nextIcr(std::string line, int next_s, int type);
		void	fileProc();
		~mySed();
};
