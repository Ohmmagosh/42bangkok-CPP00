/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:06:53 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 03:05:18 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <_ctype.h>
#include <cstring>
#include <string>
#include <strings.h>

PhoneBook::PhoneBook(void){
	PhoneBook::_a = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook() {
	return ;
}

void	PhoneBook::addContact(){
	std::string	fn;
	std::string	ln;
	std::string	nick;
	std::string	pn;
	std::string	dk;

	std::cout << YEL << "First name : " << RES;
	std::getline(std::cin, fn);
	std::cout << YEL << "Last name :" << RES;
	std::getline(std::cin, ln);
	std::cout << YEL << "Nickname :" << RES;
	std::getline(std::cin, nick);
	std::cout << YEL << "Phone number :" << RES;
	std::getline(std::cin, pn);
	std::cout << YEL << "Dark srecret :" << RES;
	std::getline(std::cin, dk);
	this->contacts[PhoneBook::_a].setContact(fn, ln, nick, pn, dk, PhoneBook::_a);
	if (this->size < 8)
		this->size++;
	PhoneBook::_a = (PhoneBook::_a + 1) % 8;
}

void	PhoneBook::getAllContact(std::string input){
	showHeader();
	for (int i = 0; i < 4 && i < this->size; i++)
		getContact(i);
}

void	PhoneBook::getContact(int index){
	contacts[index].getContact(index);
}

void	PhoneBook::showHeader(){
	std::cout << YEL << "                                SEARCH                                     " << RES << std::endl;
	std::cout << " ___ ___________ ____________ ____________ ___________ ____________ " << std::endl;
	std::cout << "| No |first_name|  last_name |  nickname  |  phone    |   srecret  |" << std::endl;
	std::cout << " --- ----------- ------------ ------------ ----------- ------------ " << std::endl;
	// ____ ____________ _____________ _____________ ______________ ____________
	//| No | first_name |  last_name  |   nickname  |     phone    |   srecret  |
	// ---- ----------- ------------- -------------- -------------- ------------
}

int	PhoneBook::_a = 0;
