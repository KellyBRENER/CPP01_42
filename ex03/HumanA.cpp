/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:36:17 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 09:59:35 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

void	HumanA::attack(void) {
	std::cout<<_name<<" attacks with their "<<_weapon.getType()\
	<<std::endl;
}

HumanA::~HumanA(void) {
	return;
}
