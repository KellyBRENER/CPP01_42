/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:31 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/24 11:05:47 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class	Weapon {
	public :
		Weapon(std::string name);
		const std::string&	getType(void);
		void		setType(std::string type);
		~Weapon(void);
	private :
		std::string	type;
} ;

#endif
