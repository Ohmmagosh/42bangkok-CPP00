/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:06:53 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/14 23:02:35 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <_ctype.h>
#include <cstring>
#include <string>
#include <strings.h>

PhoneBook::PhoneBook(void){
	this->contacts = new Contact[8];
	PhoneBook::_a = 0;
}

PhoneBook::~PhoneBook() {
	delete[] this->contacts;
}

void	PhoneBook::addContract(std::string fn, std::string ln, std::string nick, std::string pn){
	this->contacts[PhoneBook::_a].SetContact(fn, ln, nick, pn, PhoneBook::_a);
	PhoneBook::_a = (PhoneBook::_a + 1) % 8;
}

int	PhoneBook::_a = 0;
