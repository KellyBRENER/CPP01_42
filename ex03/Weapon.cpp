/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:41:43 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 10:33:23 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
	std::cout<<"Weapon constructor called"<<std::endl;
	this->type = name;
}

std::string const	Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {
	std::cout<<"Weapon destructor called"<<std::endl;
}
