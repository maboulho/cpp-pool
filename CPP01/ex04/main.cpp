/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:00:10 by maboulho          #+#    #+#             */
/*   Updated: 2023/03/04 23:47:25 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void    ft_replaces(std::ifstream &in, std::ofstream &out, std::string &s1, std::string &s2)
{
	std::string line;
	size_t		pos;
	std::string tmp;

	while (std::getline(in, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		out << line << "\n";
	}
}
int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "invalid arguments" << std::endl;
		exit(1);
	}
	std::ifstream file(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	
	if (!file.is_open())
	{
		std::cerr << "unable to open " << av[1] << std::endl;
		exit(1);
	}
	
	std::string replace_name = std::string(av[1]) + ".replace";
	std::ofstream file_replace(replace_name);
	
	if (!file_replace.is_open())
	{
		std::cerr << "unable to open " << av[1] << std::endl;
		exit(1);
	}
	ft_replaces(file, file_replace, s1, s2);
	file.close();
	file_replace.close();
	return (0);
}