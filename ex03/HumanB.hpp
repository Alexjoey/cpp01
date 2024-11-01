/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:53:20 by amylle            #+#    #+#             */
/*   Updated: 2024/10/31 11:58:12 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{

public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void)const;
	void	setWeapon(Weapon& weapon);
private:
	std::string _name;
	Weapon*		_weapon;

};


#endif
