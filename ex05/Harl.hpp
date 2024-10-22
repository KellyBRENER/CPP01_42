/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:22:45 by kbrener-          #+#    #+#             */
/*   Updated: 2024/10/22 14:02:34 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_HPP
#define HARL_HPP

class	Harl {
	public :
		Harl(void);
		void	complain(std::string level);
		~Harl(void);
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
} ;

#endif
