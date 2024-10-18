/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:01 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 10:10:20 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

Weapon	HumanB::getWeapon(void) {
	return (*this->_weapon);
}

void	HumanB::attack(void) {
	if (_weapon)
		std::cout<<_name<<" attacks with their "<<_weapon->getType()\
	<<std::endl;
	else
		std::cout<<_name<<" has no weapon !!!"<<std::endl;
}

HumanB::~HumanB(void) {
	return;	std::cout<<_name<<" attacks with their "<<_weapon->getType()\
	<<std::endl;
}
