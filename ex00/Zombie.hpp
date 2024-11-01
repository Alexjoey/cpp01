/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:49:11 by amylle            #+#    #+#             */
/*   Updated: 2024/10/30 00:00:31 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{

public:
	Zombie(void);
	Zombie(std::string);
	~Zombie(void);
	void announce(void) const;

private:
	std::string	_name;

};

void	randomChump(std::string str);
Zombie	*newZombie(std::string name);

#endif
