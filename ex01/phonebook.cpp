/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:51:15 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/17 00:51:17 by psuanpro         ###   ########.fr       */
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

	std::cout << YEL << "First name   :" << RES;
	if (!std::getline(std::cin, fn))
		return ;
	std::cout << YEL << "Last name    :" << RES;
	if (!std::getline(std::cin, ln))
		return ;
	std::cout << YEL << "Nickname     :" << RES;
	if (!std::getline(std::cin, nick))
		return ;
	std::cout << YEL << "Phone number :" << RES;
	if (!std::getline(std::cin, pn))
		return ;
	std::cout << YEL << "Dark secret  :" << RES;
	if (!std::getline(std::cin, dk))
		return ;
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
		std::cout << " ---------- ------------ ------------ ------------ ------------ ------------ " << std::endl;
	}else if (mode == 1){
		std::cout << " ---------- ------------ ------------ ------------ " << std::endl;
	}
}

void	PhoneBook::showHeader(int mode){
	if (mode == 0) {
		std::cout << YEL << "                                SEARCH                                     " << RES << std::endl;
		std::cout << " __________ ____________ ____________ ____________ ____________ ____________ " << std::endl;
		std::cout << "|  index   | first_name | last_name  |  nickname  |   phone    |   secret   |" << std::endl;
		std::cout << " ---------- ------------ ------------ ------------ ------------ ------------ " << std::endl;
	}else if (mode == 1) {
		std::cout << YEL << "                       SEARCH                      " << RES << std::endl;
		std::cout << 		" __________ ____________ ____________ ____________ " << std::endl;
		std::cout << 		"|  index   | first_name | last_name  |  nickname  |" << std::endl;
		std::cout << 		" ---------- ------------ ------------ ------------ " << std::endl;
	}
}

void	PhoneBook::searchContact(void){
	std::string	enter;
	int			index;

	if (this->size == 0){
		std::cout << YEL << "there is no contact" << RES << std::endl;
		return ;
	}
	getAllContact();
	std::cout << YEL << "Enter index of Contact : " << RES;
	if (!std::getline(std::cin, enter))
		return ;
	if (!allStrIsDigit(enter)){
		std::cout << RED << "Error : input!!!" << RES << std::endl;
		return ;
	}
	index = std::stoi(enter);
	if (index == 0 || index > this->size){
		std::cout << RED << "Error : no contact!!!" << RES << std::endl;
		return ;
	}
	showHeader(0);
	getContact(index - 1, 0);
}
void	PhoneBook::showUsage(){
	std::cout << YEL << "                 USEAGE                  " << RES << std::endl;
	std::cout <<        "     [SEARCH]    [ADD]    [EXIT]      " << std::endl;
}

bool	PhoneBook::allStrIsDigit(std::string str){
	for(int c = 0; str[c]; c++) {
		if (!std::isdigit(str[c]))
			return false;
	}
	return true;
}
int	PhoneBook::_a = 0;
