/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:26:13 by amylle            #+#    #+#             */
/*   Updated: 2024/10/30 00:30:19 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string var: " << &string << std::endl;
	std::cout << "Address held by string ptr: " << stringPTR << std::endl;
	std::cout << "Address held by string ref: " << &stringREF << std::endl;
	
	std::cout << "Value of string var: " << string << std::endl;
	std::cout << "Value pointed to by string ptr: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by string ref: " << stringREF << std::endl;
}
