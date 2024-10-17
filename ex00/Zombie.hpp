/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:30 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 11:13:10 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class	Zombie {
	public :
		Zombie(void);
		~Zombie(void);
		void	announce(void);
	private :
		std::string	name;
} ;

#endif
