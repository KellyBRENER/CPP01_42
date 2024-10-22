/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:15:15 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/22 14:32:13 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout<<"I need something to complain about"<<std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(std::string(argv[1]));
	return (0);
}
