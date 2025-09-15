/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:11:04 by msisto            #+#    #+#             */
/*   Updated: 2025/09/15 12:40:52 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>

int	main()
{
	std::string fileName;
	std::string repFile;
	std::string s1;
	std::string s2;
	std::string line;

	std::cout<<"input filename: ";
	std::cin>>fileName;
	std::cout<<"\ninput s1: ";
	std::cin>>s1;
	std::cout<<"\ninput s2: ";
	std::cin>>s2;

	std::ifstream infile(fileName.c_str());
	if (!infile)
	{
		std::cerr<<"the file doesnt exist"<<std::endl;
		return 1;
	}
	repFile = fileName + ".replace";
	std::ofstream outfile(repFile.c_str());
	if (!outfile)
	{
		std::cerr<<"couldnt create a .replace file"<<std::endl;
		return 1;
	}
	while (std::getline(infile, line))
	{
		int i = 0;
		int k = 0;
		int next_s = 0;
		int last_s = 0;
		while (1)
		{
			if (!line.empty() && line[line.length() - 1] != ' ')
				line += ' ';
			while (line[next_s] != '\0' && line[next_s] != ' ')
				next_s++;
			i = last_s;
			while (line[i] == ' ')
				i++;
			if ((std::string::size_type)(next_s - i) == s1.length())
			{
				while (s1[k] && line[i] == s1[k])
				{
					i++;
					k++;
				}
				if (s1[k] == '\0')
				{
					i = last_s;
					while (line[i] == ' ')
						i++;
					line.replace(i, next_s - i, s2);
					next_s = i + s2.length();
				}
				k = 0;
			}
			last_s = next_s;
			while (line[next_s] == ' ' && line[next_s] != '\0')
				next_s++;
			if (line[next_s] == '\0')
				break ;
		}
		line.erase(line.length() - 1, 1);
		if (outfile.is_open())
			outfile<<line<<std::endl;
		else
			std::cerr << "Failed to open file for writing.\n";
	}
	outfile.close();
}
