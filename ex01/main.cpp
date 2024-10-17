/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:40:55 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 15:05:51 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie*	horde = zombieHorde(8, "Roy");
	for (int i = 0; i < 8; ++i) {
		horde[i].annouce();
	}
	delete[] horde;
	horde = NULL;
}
