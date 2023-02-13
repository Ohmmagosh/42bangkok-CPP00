/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:06:53 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/13 23:54:30 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main(void)
{
	PhoneBook hello;
	Contact	hello2(15, 20);

	hello2.PrintOut();
	hello2.setTer(30, 46);
	hello2.PrintOut();
	hello2.swap();
	hello2.PrintOut();

	std::cout << "hello world0" << std::endl;
	std::cout << "hello world1" << std::endl;
	std::cout << "hello world2" << std::endl;
	std::cout << "hello world3" << std::endl;
	std::cout << "hello world4" << std::endl;
	return (0);
}
