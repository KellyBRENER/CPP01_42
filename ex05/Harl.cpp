/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:23:03 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/22 14:13:33 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return;
}

void	Harl::debug(void) {
	std::cout<<"I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"\
	<<std::endl;
}

void	Harl::info(void) {
	std::cout<<"I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, I wouldn’t be \
asking for more!"<<std::endl;
}

void	Harl::warning(void) {
	std::cout<<"I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here since \
last month."<<std::endl;
}

void	Harl::error(void) {
	std::cout<<"This is unacceptable! I want to speak to the manager now."\
	<<std::endl;
}

void	Harl::complain(std::string level) {
	void	(Harl::*functionptr[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	std::cout<<"***********"<<level<<"**********"<<std::endl;
	for (int i = 0; i < 4;i++) {
		if (levels[i] == level) {
			(this->*functionptr[i])();
			return;
		}
	}
	if (level.length() == 0) {
		std::cout<<"no comment..."<<std::endl;
		return;
	}
	std::cout<<level<<"... I have no much to say.."<<std::endl;
	return;
}

Harl::~Harl(void) {
	return;
}

/*
un pointeur vers une fonction membre se declare comme suit :
void	(Harl::*ptr)();
pour creer un tableau de pointeur vers des methodes membres :
void	(Harl::*ptr[])();

*/
