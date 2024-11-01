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

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
		Harl.complain(argv[1]);
	else
		std::cout << "invalid input, do ./harlFilter warningLevel" << std::endl;
}
