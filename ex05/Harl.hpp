/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:22:35 by amylle            #+#    #+#             */
/*   Updated: 2024/11/01 12:26:28 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{

public:
	void	complain(std::string str);
	Harl(void);
	~Harl(void);

private:
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

};

#endif
