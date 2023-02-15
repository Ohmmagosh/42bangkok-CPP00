/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 03:03:00 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	StrUpper(std::string &str) {
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return ;
}

int	main(void) {
	std::string	input;
	PhoneBook	book;

	std::cout << GRN << "PHONE BOOK" << RES << std::endl;
	for (;;) {
		std::cout << YEL << "CMD : " << RES;
		std::getline(std::cin, input);
		StrUpper(input);
		if (!input.compare("EXIT")){
			std::cout << BRED << "EXIT" << RES << std::endl;
			input.clear();
			break;
		}else if (!input.compare("ADD")){
			std::cout << input << std::endl;
			book.addContact();
		}else if (!input.compare("SEARCH")){
			std::cout << input << std::endl;
			book.getAllContact(input);
		}else {
			std::cout << BRED << "Error : command not found" << RES << std::endl;
		}
		input.clear();
	}
	return (0);
}

