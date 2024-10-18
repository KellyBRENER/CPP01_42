/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:44:13 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 15:55:50 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

bool	replace_str(std::string& line, const std::string oldstr, const std::string newstr)
{
	std::size_t pos = line.find(oldstr, 0);//recupere la 1ere occurence de oldstr dans line

	if (pos == std::string::npos)
		return (false);
	while (pos != std::string::npos) {//npos est une constante d'erreur == -1
		line.erase(pos, oldstr.length());
		line.insert(pos, newstr);
		pos = line.find(oldstr, pos + newstr.length());
	}
	return (true);
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cerr<<"three parameters needed : one filename and two string"<<std::endl;
		return (1);
	}
	std::string		infile_name = argv[1];//le nom du infile convertit en std::string
	std::ifstream	infile_stream(argv[1]);//en quelque sorte le fd du infile
	std::string		line;//string dans laquelle on stock ce qu'on lit
	std::string		oldstr = argv[2];//convertit le char* en std::string plus facile a manipuler
	std::string		newstr = argv[3];//idem pour la string a inserer

	if (!infile_stream.is_open()) {//si le infile n'est pas ouvert
		std::cerr<<"opening of '"<<infile_name<<"' failed"<<std::endl;//envoie un message d'erreur dans la sortie d'erreur
		return (1);
	}
	std::string		outfile_name = infile_name + ".replace";//le nom du outfile
	std::ofstream	outfile_stream(outfile_name.c_str());//le fd du outfile
	int	i = 0;
	while (std::getline(infile_stream, line))
	{
		if (replace_str(line, oldstr, newstr))
			i++;
		outfile_stream<<line<<std::endl;
	}
	infile_stream.close();
	outfile_stream.close();
	std::ifstream	outfile_verif(outfile_name.c_str());
	if (!std::getline(outfile_verif, line)) {
		std::cout<<"'"<<infile_name<<"' is empty"<<std::endl;
		outfile_verif.close();
		remove(outfile_name.c_str());
		return (1);
	}
	outfile_verif.close();
	if (i == 0)
		std::cout<<"no occurence of '"<<oldstr<<"' in '"<<infile_name<<"'"<<std::endl;
	return (0);
}
