/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:02 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 12:04:55 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*first_Zombie = newZombie("Foo");
	first_Zombie->announce();
	delete first_Zombie;
	first_Zombie = nullptr;
}
