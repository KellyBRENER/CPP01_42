/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:01 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 17:28:01 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}

Weapon	HumanB::getWeapon(void) {
	return (this->weapon);
}

void	HumanB::attack(void) {
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType()\
	<<std::endl;
}

HumanB::~HumanB(void) {
	return;
}
