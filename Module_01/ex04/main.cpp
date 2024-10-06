/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleexcolleet <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:41:50 by aleexcolleet      #+#    #+#             */
/*   Updated: 2024/10/06 23:44:51 by aleexcolleet     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int as, char **argv){

	if (as != 4){
		std::cout << "uso-->" << argv[0] << " <filename> <str1> <str2>" << std::endl;
		return (1);
	}

	std::string file_content;
	std::string str1 = argv[2];
	std::string str2 = argv[3];

	//creamos el archivo replace
	std::string new_file_name(argv[1]);
	std::ofstream new_file;
	new_file_name.append(".replace");

	//abrimos el archivo y checkeamos errores
	std::ifstream in_file(argv[1]);
	if(!in_file.is_open())
		return (0);

	//get infile content until '\0'
	std::getline(in_file, file_content, '\0');

	//open new file with a pointer(see on notes)
	new_file.open(new_file_name.c_str());
	if (!new_file.is_open())
		return (0);

	//iterate across the file
	std::string::size_type i;
	//debugging
	std::cout << "file_content at beggining--->" << file_content << std::endl;
	//
	while ((i = file_content.find(str1)) != std::string::npos){

		//debugging 
		std::cout << "file_content before while on count [" << i << "] --> " << file_content << std::endl;
		//
		file_content.erase(i, str1.length());
		file_content.insert(i, str2);

		//debugging
		std::cout << "file_content after while---> " << file_content << std::endl; 
		//
	}
	//add new content to the actual new file
	new_file << file_content;

	//close files
	in_file.close();
	new_file.close();

	return (0);
}
