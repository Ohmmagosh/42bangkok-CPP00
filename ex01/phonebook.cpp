/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:06:53 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 16:42:52 by psuanpro         ###   ########.fr       */
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

void	PhoneBook::getAllContact(void){
	showHeader(1);
	for (int i = 0; i < this->size; i++)
		getContact(i, 1);
}

void	PhoneBook::getContact(int index, int mode){
	contacts[index].getAllContact(index, mode);
	if (mode == 0){
		std::cout << " --- ------------ ------------ ------------ ------------ ------------ " << std::endl;
	}else if (mode == 1){
		std::cout << " --- ------------ ------------ ------------ " << std::endl;
	}
}

void	PhoneBook::showHeader(int mode){
	if (mode == 0) {
		std::cout << YEL << "                                SEARCH                                     " << RES << std::endl;
		std::cout << " ___ ____________ ____________ ____________ ____________ ____________ " << std::endl;
		std::cout << "|No.| first_name | last_name  |  nickname  |   phone    |  srecret   |" << std::endl;
		std::cout << " --- ------------ ------------ ------------ ------------ ------------ " << std::endl;
	}else if (mode == 1) {
		std::cout << YEL << "                  SEARCH                    " << RES << std::endl;
		std::cout << " ___ ____________ ____________ ____________ " << std::endl;
		std::cout << "|No.| first_name | last_name  |  nickname  |" << std::endl;
		std::cout << " --- ------------ ------------ ------------ " << std::endl;
	}
}

void	PhoneBook::searchContact(void){
	std::string	enter;
	int			index;
	getAllContact();
	std::cout << YEL << "Enter index of Contact : " << RES << std::endl;
	std::getline(std::cin, enter);
	index = std::stoi(enter);
	if (index == 0 || index > this->size){
		std::cout << RED << "Error : no contact!!!" << RES << std::endl;
		return ;
	}
	showHeader(0);
	getContact(index - 1, 0);
}
void	PhoneBook::showUsage(){
	std::cout << YEL << "                 USE                  " << RES << std::endl;
	std::cout <<        "     [SEARCH]    [ADD]    [EXIT]      " << std::endl;
}
int	PhoneBook::_a = 0;
