/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:36:17 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 17:28:06 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->name = name;
	this->weapon = weapon;
}

void	HumanA::attack(void) {
	std::cout<<this->name<<" attacks with their "<<this->weapon.getType()\
	<<std::endl;
}

HumanA::~HumanA(void) {
	return;
}
