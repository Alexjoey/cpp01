/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:47:36 by amylle            #+#    #+#             */
/*   Updated: 2024/11/01 12:49:24 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;
	std::string	buffer;

	while (1 && !std::cin.eof())
	{
		std::getline(std::cin, buffer);
		if (!std::cin.eof())
			Harl.complain(buffer);
	}
}

