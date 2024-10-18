/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:35:55 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/18 09:45:29 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP
class	HumanA {
	public :
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
		~HumanA(void);
	private :
		std::string	_name;
		Weapon&	_weapon;
} ;

#endif
