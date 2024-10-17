/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:13:57 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 15:32:36 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string	stringVAR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringVAR;
	std::string&	stringREF = stringVAR;

	std::cout<<"****************memory_address***************"<<std::endl;
	std::cout<<"memory address of the string variable: "<<&stringVAR<<std::endl;
	std::cout<<"memory address held by stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"memory address held by stringREF: "<<&stringREF<<std::endl;
	std::cout<<std::endl;
	std::cout<<"********************value********************"<<std::endl;
	std::cout<<"value of the string variable: "<<stringVAR<<std::endl;
	std::cout<<"value pointed to by stringPTR: "<<*stringPTR<<std::endl;
	std::cout<<"value pointed to by stringREF: "<<stringREF<<std::endl;
}
