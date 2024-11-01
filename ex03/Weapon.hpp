/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:36:47 by amylle            #+#    #+#             */
/*   Updated: 2024/10/30 00:46:24 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{

public:
	const std::string&	getType() const;
	void	setType(std::string str);
	Weapon();
	Weapon(std::string type);
	~Weapon();

private:
	std::string	_type;

};


#endif
