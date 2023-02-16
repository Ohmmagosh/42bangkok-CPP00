/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:31 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 21:16:37 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	strUpper(std::string &str) {
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
	book.showUsage();
	for (;;) {
		std::cout << YEL << "CMD : " << RES;
		if (!std::getline(std::cin, input))
			return (0);
		strUpper(input);
		if (!input.compare("EXIT")){
			std::cout << BRED << "EXIT" << RES << std::endl;
			input.clear();
			break;
		}else if (!input.compare("ADD")){
			std::cout << input << std::endl;
			book.addContact();
		}else if (!input.compare("SEARCH")){
			book.searchContact();
		}else {
			std::cout << BRED << "Error : command not found" << RES << std::endl;
		}
		input.clear();
	}
	return (0);
}

