/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:36:39 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 09:46:33 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP
class	HumanB {
	public :
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
		Weapon	getWeapon(void);
		~HumanB(void);
	private :
		std::string	_name;
		Weapon	*_weapon;
} ;

#endif
