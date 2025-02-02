/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:30 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/24 10:54:11 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class	Zombie {
	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string new_name);
	private :
		std::string	name;
} ;

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif
