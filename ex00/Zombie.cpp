/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:13:45 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/24 10:55:06 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout<<"Zombie constructor called"<<std::endl;
}

Zombie::Zombie(std::string name) {
	std::cout<<"Zombie constructor called"<<std::endl;
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::set_name(std::string new_name) {
	this->name = new_name;
}

Zombie::~Zombie(void) {
	std::cout<<"destructor called of Zombie : "<<this->name<<std::endl;
}
