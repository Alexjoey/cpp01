/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:05:21 by amylle            #+#    #+#             */
/*   Updated: 2024/10/30 02:13:43 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void)const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
