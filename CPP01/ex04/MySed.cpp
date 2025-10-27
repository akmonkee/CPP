/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 11:21:50 by msisto            #+#    #+#             */
/*   Updated: 2025/10/22 14:19:52 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"MySed.hpp"

MySed::MySed()
{
	std::cout<<"input filename: ";
	std::cin>>this->fileName;
	std::cout<<"\ninput s1: ";
	std::cin>>this->s1;
	std::cout<<"\ninput s2: ";
	std::cin>>this->s2;

	this->infile.open(fileName.c_str());
	if (this->infile)
		this->outfile.open((fileName + ".replace").c_str());
}

bool	MySed::infileCheck()
{
	if (!this->infile)
	{
		std::cerr<<"the file doesnt exist"<<std::endl;
		return false;
	}
	return true;
}

bool	MySed::outfileCheck()
{
	if (!this->outfile)
	{
		std::cerr<<"couldnt create a .replace file"<<std::endl;
		return false;
	}
	return true;
}

int	MySed::nextIcr(std::string line, int next_s, int type)
{
	if (type == 0)
	{
		while (line[next_s] != '\0' && line[next_s] != ' ')
			next_s++;
	}
	else if (type == 1)
	{
		while (line[next_s] == ' ' && line[next_s] != '\0')
			next_s++;
	}
	return next_s;
}

int	MySed::firstWChar(std::string line, int last_s)
{
	int	i;
	i = last_s;
	while (line[i] == ' ')
		i++;
	return i;
}

void	MySed::fileProc()
{
	if (infileCheck() == false || outfileCheck() == false)
		return ;
	std::string	line;
	while (std::getline(this->infile, line))
	{
		int i = 0;
		int k = 0;
		int next_s = 0;
		int last_s = 0;
		while (1)
		{
			if (line.length() == 0)
				break ;
			if (!line.empty() && line[line.length() - 1] != ' ')
				line += ' ';
			next_s = nextIcr(line, next_s, 0);
			i = firstWChar(line, last_s);
			if ((std::string::size_type)(next_s - i) == s1.length())
			{
				while (s1[k] && line[i] == s1[k])
				{
					i++;
					k++;
				}
				if (s1[k] == '\0')
				{
					i = firstWChar(line, last_s);
					line.erase(i, next_s - i);
					line.insert(i, s2);
					next_s = i + s2.length();
				}
				k = 0;
			}
			last_s = next_s;
			next_s = nextIcr(line, next_s, 1);
			if (line[next_s] == '\0')
				break ;
		}
		if (line.length() != 0)
			line.erase(line.length() - 1, 1);
		if (this->outfile.is_open())
			this->outfile<<line<<std::endl;
		else
			std::cerr << "Failed to open file for writing.\n";
	}
	this->outfile.close();
}

MySed::~MySed()
{
	;
}
