/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:13:45 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 11:16:36 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout<<"Zombie constructor called"<<std::endl;
}

void	Zombie::announce(void) {
	std::cout<<"<"<<this->name<<">: BraiiiiiiinnnzzzZ..."<<std::endl;
}
