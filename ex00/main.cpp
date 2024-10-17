/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:02 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 14:38:04 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*allocated_Zombie = newZombie("Foo");
	allocated_Zombie->announce();
	randomChump("non_allocated Zombie");
	delete allocated_Zombie;
	allocated_Zombie = NULL;
}
