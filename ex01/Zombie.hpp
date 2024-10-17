/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:42:50 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 15:00:31 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class	Zombie {
	public :
		Zombie(void);
		void	set_name(std::string name);
		void	annouce(void);
		~Zombie(void);
	private :
	std::string	name;
} ;

Zombie* zombieHorde( int N, std::string name );

#endif
