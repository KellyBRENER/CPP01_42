/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:51:58 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 15:04:20 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {
	std::cout<<"Zombie constructor called"<<std::endl;
}

void	Zombie::set_name(std::string name) {
	this->name = name;
}

void	Zombie::annouce(void) {
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie (void) {
	std::cout<<"destructor called of zombie named : "<<this->name<<std::endl;
}
