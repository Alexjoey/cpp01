/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:57:35 by amylle            #+#    #+#             */
/*   Updated: 2024/10/30 00:01:29 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1;
	Zombie ben("ben");

	zombie1.announce();
	ben.announce();

	randomChump("randomchump");
	randomChump("meow");

	Zombie	*ptr;
	ptr = newZombie("Stanley");
	ptr->announce();
	delete(ptr);
}
