/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:44:18 by amylle            #+#    #+#             */
/*   Updated: 2024/10/31 13:47:24 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//replaces str2 for str1
void	replaceAndWriteStrings(std::ofstream &ofile, std::string str1, std::string str2, std::string buff)
{
	size_t	cPos;
	size_t	stringPos;

	cPos = 0;
	stringPos = buff.find(str1);
	while (stringPos != buff.npos)
	{
		ofile << buff.substr(cPos, stringPos - cPos) << str2;
		cPos = stringPos + str1.length();
		stringPos = buff.find(str1, cPos);
	}
	ofile << buff.substr(cPos, stringPos);
}

int	main(int argc, char **argv)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		str1;
	std::string		str2;
	std::string		fileName;
	std::string		fileReplaceName;
	std::string		buff;

	if (argc != 4)
	{
		std::cout << "Invalid num of arguments, use ./replace file string1 string2" << std::endl;
		return (1);
	}
	fileName = argv[1];
	str1 = argv[2];
	str2 = argv[3];
	inFile.open(fileName.c_str());
	if (!inFile.is_open())
	{
		std::cout << "Unable to open file: " << fileName << std::endl;
		return (1);
	}
	fileReplaceName = fileName + ".replace";
	outFile.open(fileReplaceName.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Unable to open replace file: " << fileReplaceName << std::endl;
		inFile.close();
		return (1);
	}
	while (getline(inFile, buff))
		replaceAndWriteStrings(outFile, str1, str2, buff + '\n');
	inFile.close();
	outFile.close();
}
