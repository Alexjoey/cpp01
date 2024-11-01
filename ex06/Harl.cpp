/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:25:19 by amylle            #+#    #+#             */
/*   Updated: 2024/11/01 12:27:16 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void	Harl::complain(std::string level)
{
	void (Harl::*fptr[4])() const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = -1;

	while (++i < 4)
		if (level == levels[i])
			break ;
	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*fptr[0])();
			std::cout << std::endl;
			// fall through
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			(this->*fptr[1])();
			std::cout << std::endl;
			// fall through
		case (2):
			std::cout << "[ WARNING ]" <<std::endl;
			(this->*fptr[2])();
			std::cout << std::endl;
			// fall through
		case (3):
			std::cout << "[ ERROR ]" <<std::endl;
			(this->*fptr[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "invalid level" << std::endl;
	}
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
