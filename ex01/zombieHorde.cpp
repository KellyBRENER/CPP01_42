/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:42:14 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/17 14:57:54 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie*	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		zombieHorde[i].set_name(name);
	}
	return (zombieHorde);
}
